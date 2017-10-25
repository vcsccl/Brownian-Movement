#pragma once
#include "ofMain.h"

class Walker {
public:
	int x;
	int y;
	int size;
	ofColor color;
	Walker();
	Walker(int x, int y, int size, ofColor color);
	void move();
	void draw();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
};