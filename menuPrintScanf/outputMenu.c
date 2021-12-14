#include <stdio.h>

#include "../h_files/struct.h"
#include "../h_files/output_funcs.h"


void outputMenu(detail **data, int dataSize){
    printf("~~OUTPUT MENU~~\n");
    printf("1)- Write to console\n");
    printf("2) Write to file\n");
    printf("3) Back\n");
    printf("=============\n");

    int choise;
    scanf("%d", &choise);

    switch(choise){
        case 1:{
            outputDataConsole(data, dataSize);
            return;
        }
        case 2:{
            outputDataFile(data, dataSize);
            return;
        }
    }

}
