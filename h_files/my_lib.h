#ifndef MYLIB_H
#define MYLIB_H

#include "struct.h"

char* addTechPrefix(char *origString);
void freeNamesFields(detail *data, int datasize);
void cpyElemStruct(detail *cpy, detail *source);

detail* newElement();
detail* structNewMem(detail *oldData, int newSize, int oldSize);
detail* includeElemByIndex(detail *oldData, detail *Elem, int *Datasize, int index);

#endif