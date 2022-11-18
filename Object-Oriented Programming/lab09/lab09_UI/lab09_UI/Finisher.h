#ifndef FINISHER_H
#define FINISHER_H
#pragma once
#include "Logger.h"
class Finisher : public virtual Logger{
	virtual void finish() = 0;
};
#endif

