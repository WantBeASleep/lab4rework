#ifndef PROCESSEDFUNCS_H
#define PROCESSEDFUNCS_H

#include "struct.h"

detail* newElementByIndex(detail *Data, int *Datasize);
detail* shakerSort(detail *Data, int DataSize, int sortType);
detail* insertionSort(detail *Data, int DataSize, int sortType);
detail* selectionSort(detail *Data, int DataSize, int sortType);

#endif