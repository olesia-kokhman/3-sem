#ifndef COMPLEXMAZEBUILDER_H
#define COMPLEXMAZEBUILDER_H
#pragma once
#include "MazeBuilder.h"
class ComplexMazeBuilder: public MazeBuilder {
public:
	virtual void setHeight() override;
	virtual void setWidth() override;
	virtual void setComplexity() override;
	virtual ~ComplexMazeBuilder() {};
};
#endif 

