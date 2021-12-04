#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/processed_funcs.h"

detail* sortMenu(detail *Data, int DataSize, int *SortType){
    printf("~~SORT MENU~~\n");
    printf("1)- Sort by id\n");
    printf("2)- Sort by name\n");
    printf("3)- Sort by counter\n");
    printf("4)- Back\n");
    printf("=============\n");

    scanf("%d", SortType);

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
            return shakerSort(Data, DataSize, *SortType);
            break;
        }
        case 2:{
            return insertionSort(Data, DataSize, *SortType);
            break;
        }
        case 3:{
            return selectionSort(Data, DataSize, *SortType);
            break;
        }
    }

}

