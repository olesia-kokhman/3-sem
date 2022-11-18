#ifndef BUILDER_H
#define BUILDER_H
#pragma once
#include "Maze.h"

class Builder { // abstract class
protected:
	string colour;
	string shape;
	string style;
	string complexity;
	int height;
	int width;
public:
	virtual void setShape(string shape) = 0;
	virtual void setColour(string colour) = 0;
	virtual void setStyle(string style) = 0;
	virtual void setHeight() = 0;
	virtual void setWidth() = 0;
	virtual void setComplexity() = 0;
};
#endif

