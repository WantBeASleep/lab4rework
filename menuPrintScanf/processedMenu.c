#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/menus.h"
#include "../h_files/processed_funcs.h"

detail** processedMenu(detail **data, int *dataSize, int *sortType){
    printf("~~PROCESSED MENU~~\n");
    printf("1)- New Element By Index\n");
    printf("2)- New Element && Save Sort\n");
    printf("3)- Remove Elems from Index\n");
    printf("4)- Back\n");
    printf("=============\n");

    int choise;
    scanf("%d", &choise);

    switch(choise){
        case 1:{
            return addElemByIndex(data, dataSize, sortType);
            break;
        }
        case 2:{
            return addElemSaveSort(data, dataSize, sortType);
            break;
        }
        case 3:{
            return deleteElemByIndex(data, dataSize);
            break;
        }
        case 4:{
            return data;
        }
    }

}

