#pragma once

#include "ofMain.h"
#include "ofxRollingCam.h"
#define NUM 100

class ofApp : public ofBaseApp{
    
private:
    int r = 0;
    float *volume;
    ofSoundPlayer soundplayer;
    
    
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxRollingCam rollCam;
    ofLight lig;
    vector <ofVec3f> pos;
    bool hide;
    ofSpherePrimitive sphere ;
    ofEasyCam cam;
    
    ofBoxPrimitive box, mBox[NUM];
    int boxSize;
    

    
    
    
    
};
