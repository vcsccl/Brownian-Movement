#include "ofApp.h"

const int NUMBER_OF_WALKERS = 100;

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(50); 
	for (int i = 0; i < NUMBER_OF_WALKERS; ++i) {
		Walker *w = (new Walker(ofGetWidth() / 2, ofGetHeight() / 2, 20, ofColor(ofRandom(255), ofRandom(255), ofRandom(255))));
		walkers.push_back(w);
	};
}

//--------------------------------------------------------------
void ofApp::update() {
	for (int i = 0; i < walkers.size(); i++) {
		walkers[i]->move();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (int i = 0; i < walkers.size(); i++) {
		walkers[i]->draw();
	}
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
