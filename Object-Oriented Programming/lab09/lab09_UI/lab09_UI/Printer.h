#ifndef PRINTER_H
#define PRINTER_H
#pragma once
#include "Logger.h"
class Printer : public virtual Logger {
	virtual void print() = 0;
};
#endif

