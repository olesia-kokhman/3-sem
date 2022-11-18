#include "MazeBuilder.h"

void MazeBuilder::setShape(string shape) {
	this->shape = shape;
}
void MazeBuilder::setColour(string colour) {
	this->colour = colour;
}
void MazeBuilder::setStyle(string style) {
	this->style = style;
}
void MazeBuilder::setHeight() {
	this->height = 0;
}
void MazeBuilder::setWidth() {
	this->width = 0;
}
Maze* MazeBuilder::getMaze() {
	return new Maze(this->shape, this->colour, this->style, this->height, this->width, this->complexity);
}