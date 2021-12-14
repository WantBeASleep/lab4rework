#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../h_files/struct.h"
#include "../h_files/input_funcs.h"
#include "../h_files/sort_funcs.h"

void timeMenu(){

    int elemCount, itterationsCount, sortName;

    printf("~~TIME MENU~~\n");
    printf("- Enter elem count - ");
    scanf("%d", &elemCount);
    printf("- Enter itterations count - ");
    scanf("%d", &itterationsCount);
    printf("-1 Sort by Shaker\n");
    printf("-2 Sort by Insertion\n");
    printf("-3 Sort by Selection\n");
    printf("- Choose sort type - ");
    scanf("%d", &sortName);

    double *averageTime;
    averageTime = (double *)malloc(itterationsCount * sizeof(double));
    
    for (int i=0; i<itterationsCount; i++){
        detail **itterationData;
        itterationData = generation(elemCount);
        clock_t start = clock();
        switch (sortName)
        {
            case 1:{
                shakerSort(itterationData, elemCount, 3);
                break;
            }
            case 2:{
                insertionSort(itterationData, elemCount, 3);
                break;
            }
            case 3:{
                selectionSort(itterationData, elemCount, 3);
                break;
            }
        }
        clock_t end = clock();
        double time = ((double)(end - start)) / CLOCKS_PER_SEC ;
        averageTime[i] = time;
    }

    double res = 0;
    for (int i=0; i<itterationsCount; i++){
        res += averageTime[i];
    }
    res /= itterationsCount;
    printf("res of sort : %f", res);
    return;
}