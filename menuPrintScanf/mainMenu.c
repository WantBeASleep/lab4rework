#include <stdio.h>

int mainMenu(){
    printf("~~MAIN MENU~~\n");
    printf("1)- Enter the data\n");
    printf("2)- Write the data\n");
    printf("3)- Processing the data\n");
    printf("4)- SortMenu\n");
    printf("5)- Time`s\n");
    printf("6)- Exit\n");
    printf("=============\n");
    int choise;
    scanf("%d", &choise);
    return choise;
}