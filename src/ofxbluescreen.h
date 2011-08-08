#ifndef OFXBLUESCREEN_H
#define OFXBLUESCREEN_H

#include "ofMain.h"

class ofxBluescreen: public ofImage {

public:
	ofxBluescreen();
	~ofxBluescreen();

	void setPixels(ofPixelsRef pixels);
	void learnBgColor(ofPixelsRef pixels);
	void setBgColor(ofColor col);
	void setThreshhold(float thresh);
	void drawBgColor(int x=0, int y=0, int w=10, int h=10);
	void draw(int x, int y, int w, int h, bool checkers=true);
	float getThreshhold();
private:
	void update();
	void drawCheckers(int x, int y, int w, int h);

	ofPixels pixelSource;
	ofColor bgColor;
	float threshhold;
	int highestKey;
	bool checkForHighest;
};

#endif // OFXBLUESCREEN_H
