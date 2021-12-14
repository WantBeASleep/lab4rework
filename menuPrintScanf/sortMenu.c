#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/sort_funcs.h"

void sortMenu(detail **data, int dataSize, int *sortType){
    printf("~~SORT MENU~~\n");
    printf("1)- Sort by id\n");
    printf("2)- Sort by name\n");
    printf("3)- Sort by counter\n");
    printf("4)- Back\n");
    printf("=============\n");

    scanf("%d", sortType);

    printf("~~SORT MENU~~\n");
    printf("1)- Sort by Shaker\n");
    printf("2)- Sort by Insertion\n");
    printf("3)- Sort by Selection\n");
    printf("4)- Back\n");
    printf("=============\n");

    int choise;
    scanf("%d", &choise);

    switch(choise){
        case 1:{
            shakerSort(data, dataSize, *sortType);
            break;
        }
        case 2:{
            insertionSort(data, dataSize, *sortType);
            break;
        }
        case 3:{
            selectionSort(data, dataSize, *sortType);
            break;
        }
        case 4:{
            return;
        }
    }

    return;
}

