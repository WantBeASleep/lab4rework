#ifndef SORTFUNC_H
#define SORTFUNC_H

#include "struct.h"

void shakerSort(detail **data, int datasize, int sortType);
void insertionSort(detail **data, int dataSize, int sortType);
void selectionSort(detail **data, int dataSize, int sortType);

#endif