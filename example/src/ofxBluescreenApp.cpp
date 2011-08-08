#include "ofxBluescreenApp.h"

//--------------------------------------------------------------
void ofxBluescreenApp::setup() {
	ofSetWindowTitle("ofxBluescreenApp");
	ofBackground(0,0,0);
	ofSetFrameRate(60);
	grabber.initGrabber(640, 480);
	bluescreen.setPixels(grabber.getPixelsRef());
}

//--------------------------------------------------------------
void ofxBluescreenApp::update() {
	grabber.update();
	if(grabber.isFrameNew())
		bluescreen.setPixels(grabber.getPixelsRef());
}

//--------------------------------------------------------------
void ofxBluescreenApp::draw() {
	ofSetColor(255);
	bluescreen.draw(0, 0, 640, 480);
	grabber.draw(0, 0, 160, 120);
	bluescreen.drawBgColor();
}

//--------------------------------------------------------------
void ofxBluescreenApp::keyPressed(int key) {
	if(key == OF_KEY_UP)
		bluescreen.setThreshhold(bluescreen.getThreshhold()+5);
	if(key == OF_KEY_DOWN)
		bluescreen.setThreshhold(bluescreen.getThreshhold()-5);
}

//--------------------------------------------------------------
void ofxBluescreenApp::keyReleased(int key) {
	if(key == ' ')
		bluescreen.learnBgColor(grabber.getPixelsRef());

}

//--------------------------------------------------------------
void ofxBluescreenApp::mouseMoved(int x, int y ) {

}

//--------------------------------------------------------------
void ofxBluescreenApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofxBluescreenApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofxBluescreenApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofxBluescreenApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofxBluescreenApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofxBluescreenApp::dragEvent(ofDragInfo dragInfo) {

}
