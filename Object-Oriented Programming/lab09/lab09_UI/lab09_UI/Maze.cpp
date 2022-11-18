#include "Maze.h"

Maze::Maze(string shape, string colour, string style, int height, int width, string complexity) {
	this->shape = shape;
	this->colour = colour;
	this->style = style;
	this->height = height;
	this->width = width;
	this->isFinished = false;
	this->complexity = complexity;
}
Maze::Maze(Maze* maze) {
	this->shape = maze->getShape();
	this->colour = maze->getColour();
	this->style = maze->getStyle();
	this->height = maze->getHeight();
	this->width = maze->getWidth();
	this->isFinished = false;
	this->complexity = maze->getComplexity();
}
string Maze::getShape() {
	return this->shape;
}
string Maze::getColour() {
	return this->colour;
}
string Maze::getStyle() {
	return this->style;
}
int Maze::getHeight() {
	return this->height;
}
int Maze::getWidth() {
	return this->width;
}
bool Maze::getIsFinished() {
	return this->isFinished;
}
void Maze::print() {
	cout << "shape - " << this->shape << endl;
	cout << "colour - " << this->colour << endl;
	cout << "style - " << this->style << endl;
	cout << "height - " << this->height << endl;
	cout << "width - " << this->width << endl;
	cout << "compexity - " << this->complexity << endl;
	cout << "is finished - " << this->isFinished << endl;
	log("print");
}
void Maze::finish() {
	this->isFinished = true;
	log("finish");
}
string Maze::getComplexity() {
	return this->complexity;
}
