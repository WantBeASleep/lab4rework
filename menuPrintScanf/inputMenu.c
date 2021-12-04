#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/input_funcs.h"

detail* inputMenu(int *DataSize){
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
            return inputDataConsole(DataSize);
            break;
        }
        case 2:{
            return inputDataFile(DataSize);
            break;
        }
    }

}

