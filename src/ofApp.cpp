#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    rollCam.setup();//rollCam's setup.
    lig.setup();
    
    ofBackground(255, 255, 255);
    
    soundplayer.loadSound("beat.mp3");
    soundplayer.setLoop(true);
    soundplayer.setVolume(1.0);
    soundplayer.play();
    
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    rollCam.update();
    
    volume = ofSoundGetSpectrum(1);
    r = volume[0]*1300;
    
    
    if (ofGetFrameNum()%1000 == 200) {//All Random.
        rollCam.setRandomScale(0.5, 1.5);
        rollCam.setRandomPos(270);
    }
    if (ofGetFrameNum()%1000 == 400) {//Random rotate.
        rollCam.setRandomPos(270);
    }
    if (ofGetFrameNum()%1000 == 600) {//Inputting optional rotate.
        rollCam.setPos(0, 0, 0);
    }
    if (ofGetFrameNum()%1000 == 800) {//Random distance.
        rollCam.setRandomScale(0.5, 1.5);
    }
    if (ofGetFrameNum()%1000 == 119) {//Inputting optional distance.
        rollCam.setScale(1);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    rollCam.begin(); //rollCam begin
    
    
    
    
    ofSetColor(195+r, 13, 34);
    

    
    sphere.setPosition(0, 0, 0);
    sphere.set(100+r, 16);
    sphere.draw();
    
    
    ofPushMatrix();
    ofPushStyle();
    
    
    ofSetColor(255 , 255, 255);
    
    ofRotateX(90);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 0, 100+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 30, 91+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 60, 78+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 90, 40+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, -30, 91+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, -60, 78+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, -90, 40+r);
    
    
    ofPopStyle();
    ofPopMatrix();
    
    ofPushMatrix();
    ofPushStyle();
    
    
    ofSetColor(255 , 255, 255);
    
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 0, 100+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 30, 91+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 60, 78+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, 90, 40+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, -30, 91+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, -60, 78+r);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetCircleResolution(60);
    ofCircle(0, 0, -90, 40+r);
    
    
    ofPopStyle();
    ofPopMatrix();
    
    
    
    
    
    
    
    
    
    
    rollCam.end();  //rollCam end
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
