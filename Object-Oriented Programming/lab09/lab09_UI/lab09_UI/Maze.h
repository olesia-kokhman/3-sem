#ifndef MAZE_H
#define MAZE_H
#pragma once
#include <iostream>
#include "Printer.h"
#include "Finisher.h"
using namespace std;
class Maze : public Printer, public Finisher{
private: 
	string shape;
	string colour;
	string style;
	string complexity;
	int height;
	int width;
	bool isFinished = false;
public:
	Maze(string shape, string colour, string style, int height, int width, string complexity);
	Maze(Maze* maze); // copy constructor
	virtual ~Maze() {};
	string getColour();
	string getShape();
	string getStyle();
	int getHeight();
	int getWidth();
	bool getIsFinished();
	string getComplexity();
	virtual void print() override;
	virtual void finish() override;

};
#endif

