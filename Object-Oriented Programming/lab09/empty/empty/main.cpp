#include <iostream>
using namespace std;
#include "SimpleMazeBuilder.h"
#include "MiddleMazeBuilder.h"
#include "ComplexMazeBuilder.h"
#include "Maze.h"
#include <list>

template <typename T>
void callMazeOperations(T& builder) {
	builder.setShape("circle");
	builder.setColour("black");
	builder.setStyle("orthagonal");
	builder.setHeight();
	builder.setWidth();
	builder.setComplexity();
	Maze maze = builder.getMaze();
	maze.finish();
	maze.print();
}

int main() {
	
	MiddleMazeBuilder middleBuilder = MiddleMazeBuilder();
	SimpleMazeBuilder simpleBuilder = SimpleMazeBuilder();
	ComplexMazeBuilder complexBuilder = ComplexMazeBuilder();
	MazeBuilder mazeBuilder = MazeBuilder();
	//builder.setShape("circle");
	//builder.setColour("black");
	//builder.setStyle("orthagonal");
	//builder.setHeight();
	//builder.setWidth();

	callMazeOperations(simpleBuilder);
	callMazeOperations(middleBuilder);
	callMazeOperations(complexBuilder);
	callMazeOperations(mazeBuilder);

	return 0;
}
