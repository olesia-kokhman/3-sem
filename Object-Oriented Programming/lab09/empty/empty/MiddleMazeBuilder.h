#ifndef MIDDLEMAZEBUILDER_H
#define MIDDLEMAZEBUILDER_H
#pragma once
#include "MazeBuilder.h"
class MiddleMazeBuilder : public MazeBuilder {
public:
	virtual void setHeight() override;
	virtual void setWidth() override;
	virtual void setComplexity() override;
	virtual ~MiddleMazeBuilder() {};
};
#endif
