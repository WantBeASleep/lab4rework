#include <stdio.h>
#include <stdlib.h>

#include "h_files/struct.h"
#include "h_files/menus.h"
#include "h_files/my_lib.h"

int main(){
    int SortType = 0; // 0 - не сорт, 1 - сорт по id, 2 - сорт по name, 3 - сорт по counter
    detail *MainData = NULL;
    int MainDataSize = 0;

    for(; ;){
        int choise = mainMenu();
        switch (choise){
            case 1:{
                freeNamesFields(MainData, MainDataSize);
                free(MainData);
                MainDataSize = 0;
                SortType = 0;
                MainData = inputMenu(&MainDataSize);
                break;
            }
            case 2:{
                outputMenu(MainData, MainDataSize);
                break;
            }
            case 3:{
                MainData = processedMenu(MainData, &MainDataSize, &SortType);
                break;
            }
            case 5:{
                freeNamesFields(MainData, MainDataSize);
                free(MainData);
                exit(0);
                break;
            }
        }
    }

    return 0;
}
/*
int main(){
    detail *Data = NULL;
    int DataSize = 0;
    while (1)
    {
        printf("~~MAIN MENU~~\n1) Enter the data\n2) Write the data\n3) RemoveData\n4) Processing the data\n5) Time`s\n6) Exit\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");

        switch (choise){
            case 1:
                {
                    detail *newData = NULL;
                    int count = DataSize;
                    newData = InputDataMenu(&DataSize);
                    count = DataSize - count;

                    int idx = 0, j = 0;

                    detail *tmpData = NULL;
                    tmpData = Data;
                    Data = strctncpy(tmpData, DataSize, count);
                    freestrct(tmpData, DataSize-count);
                    free(tmpData);

                    for (idx = DataSize-count; idx<DataSize; idx++){
                        strcpy(Data[idx].id, newData[j].id);
                        Data[idx].name = (char *)malloc(strlen(newData[j].name) * sizeof(char));
                        strcpy(Data[idx].name, newData[j].name);
                        Data[idx].counter = newData[j].counter;
                        j++;
                    }
                    freestrct(newData, count);
                    free(newData);
                }
                break;
            case 2:
                OutputDataMenu(Data, DataSize);
                break;
            case 3:
                freestrct(Data, DataSize);
                free(Data);
                DataSize = 0;
                break;
            case 4:
                {
                    detail *tmpData = Data;
                    int oldDatasize = DataSize;
                    Data = DataWorkMenu(Data, &DataSize);
                    free(tmpData);
                }
                break;
            case 5:
                break;
            case 6:
                exit(0);
                free(Data);
                break;
        }
    }

    return 0;
}
*/