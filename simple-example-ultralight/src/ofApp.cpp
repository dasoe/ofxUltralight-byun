#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//³ª´®°íµñ
	ultralight_config.font_family_standard = "Verdana";
	//Samsung ulBrowser 7.2 on Android 8.1 Samsung Galaxy S9 Plus 
	ultralight_config.user_agent = "Mozilla/5.0 (Linux; Android 8.1.0; SM-G965F Build/OPM2.171019.029) AppleWebKit/537.36 (KHTML, like Gecko) SamsungulBrowser/7.2 Chrome/59.0.3071.125 Mobile Safari/537.36";
	ulBrowser = make_shared<ofxUltralight>(&ultralight_config);
	screen = ofRectangle(40, 80, 1200, 800);
	ulBrowser->createViewAsset(screen.width, screen.height, "https://www.deutsches-museum.de/");
}

//--------------------------------------------------------------
void ofApp::update() {
	ulBrowser->update();
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofClear(ofColor::black);
	ulBrowser->draw(screen);

	ofDrawBitmapStringHighlight("Ultralight in OF", 30, 20, ofColor(255, 255, 255), ofColor(0, 0, 0));
	ofDrawBitmapStringHighlight("Framerate: " + ofToString(ofGetFrameRate()), 30, 40, ofColor(255, 255, 255), ofColor(0, 0, 0));

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	ulBrowser->mousePressed(x, y, button, screen);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
	ulBrowser->mouseReleased(x, y, button, screen);
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {
	ulBrowser->mouseScrolled(x, y, scrollX, scrollY, screen);
}
