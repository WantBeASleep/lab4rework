#ifndef MENUS_H
#define MENUS_H

int mainMenu();

detail** inputMenu(detail **data, int *dataSize, int *sortType);
detail** processedMenu(detail **data, int *dataSize, int *SortType);

void sortMenu(detail **data, int dataSize, int *sortType);
void outputMenu(detail **data, int dataSize);
void timeMenu();

#endif