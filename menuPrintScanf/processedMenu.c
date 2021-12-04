#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/menus.h"
#include "../h_files/processed_funcs.h"

detail* processedMenu(detail *Data, int *DataSize, int *SortType){
    printf("~~PROCESSED MENU~~\n");
    printf("1)- New Element By Index\n");
    printf("2)- New Element && Save Sort\n");
    printf("3)- Remove Elems from Index\n");
    printf("4)- Sort\n");
    printf("5)- Back\n");
    printf("=============\n");

    int choise;
    scanf("%d", &choise);

    switch(choise){
        case 1:{
            return newElementByIndex(Data, DataSize);
            break;
        }
        case 4:{
            return sortMenu(Data, *DataSize, SortType);
        }
    }

}

