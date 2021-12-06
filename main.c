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

// ФОРМАТ ID ** - **...
