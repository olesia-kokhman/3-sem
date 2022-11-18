#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H
#pragma once
#include "Builder.h"

class MazeBuilder : public Builder {
public:
	virtual void setShape(string shape) override;
	virtual void setColour(string colour) override;
	virtual void setStyle(string style) override;
	virtual void setHeight() override;
	virtual void setWidth() override;
	virtual void setComplexity() override {
		this->complexity = "Classic";
	}
	virtual Maze* getMaze();
	virtual ~MazeBuilder() {};
};
#endif

