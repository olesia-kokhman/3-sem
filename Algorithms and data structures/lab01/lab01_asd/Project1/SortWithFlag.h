#ifndef SORTWITHFLAG_H
#define SORTWITHFLAG_H
#pragma once
#include "Sort.h"
class SortWithFlag : public Sort {
public:
	SortWithFlag(const Sort* sort);
	~SortWithFlag();
	void bubbleSort(System::Windows::Forms::RichTextBox^ richTextBox);
};
#endif

