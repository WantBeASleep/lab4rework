#ifndef MENUS_H
#define MENUS_H

int mainMenu();
detail* inputMenu(int *DataSize);
void outputMenu(detail *Data, int DataSize);
detail* processedMenu(detail *Data, int *DataSize, int *SortFlag);
detail* sortMenu(detail *Data, int DataSize, int *SortType);

#endif