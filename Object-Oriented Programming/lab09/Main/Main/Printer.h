#ifndef PRINTER_H
#define PRINTER_H
#pragma once
#include "Logger.h"
class Printer : public virtual Logger {
	virtual void print(System::Windows::Forms::Label^ label) = 0;
};
#endif

