#pragma once

#include <ofMain.h>
#include <ofxUltralight.hpp>

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseScrolled(int x, int y, float scrollX, float scrollY);

	ultralight::Config ultralight_config;
	ofxUltralight::Ptr ulBrowser;
	ofRectangle screen;

};
