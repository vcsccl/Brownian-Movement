#include "walker.h"
#include "ofMain.h"

Walker::Walker() {
	x = 500;
	y = 500;
	size = 5;
	color = ofColor(255);
}

Walker::Walker(int x, int y, int size, ofColor color) {
	this->x = x;
	this->y = y;
	this->size = size;
	this->color = color;
}

void Walker::move() {
	int direction = ofRandom(4);
	if (direction == 0) {
		moveUp();
	}
	else if (direction == 1) {
		moveDown();
	}
	else if (direction == 2) {
		moveRight();
	}
	else if (direction == 3) {
		moveLeft();
	}
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(x, y, size);
}

void Walker::moveUp() {
	y--;
}

void Walker::moveDown() {
	y++;
}

void Walker::moveRight() {
	x++;
}

void Walker::moveLeft() {
	x--;
}
