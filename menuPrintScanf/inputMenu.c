#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/input_funcs.h"
#include "../h_files/my_lib.h"

detail** inputMenu(detail **data, int *dataSize, int *sortType){

    *sortType = 0;
    freeStructData(data, dataSize);

    printf("~~INPUT MENU~~\n");
    printf("1)- Enter by console\n");
    printf("2)- Enter from file\n");
    printf("3)- Random Generate\n");
    printf("4)- Back\n");
    printf("=============\n");

    int choise;
    scanf("%d", &choise);

    switch(choise){
        case 1:{
            return inputDataConsole(dataSize);
            break;
        }
        case 2:{
            return inputDataFile(dataSize);
            break;
        }
        case 3:{
            printf("count of mems? - ");
            scanf("%d", dataSize);
            return generation(*dataSize);
            break;
        }
        case 4:{
            return NULL;
        }
    }
}

