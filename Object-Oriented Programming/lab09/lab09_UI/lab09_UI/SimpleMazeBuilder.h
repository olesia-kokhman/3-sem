#ifndef SIMPLEMAZEBUILDER_H
#define SIMPLEMAZEBUILDER_H
#pragma once
#include "MazeBuilder.h"
class SimpleMazeBuilder: public MazeBuilder {
public:
	virtual void setHeight() override;
	virtual void setWidth() override;
	virtual void setComplexity() override;
	virtual ~SimpleMazeBuilder() {};
};
#endif

