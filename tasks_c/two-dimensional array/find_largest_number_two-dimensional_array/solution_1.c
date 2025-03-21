#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void find_largest_num() {
    
    int **arr;
    int rows;
    int cols;
    int maximum = INT_MIN;

    printf("Введите количество строк: \n");
    scanf("%d", &rows);

    printf("Введите количество стобцов (элементов во вложенном массиве): \n");
    scanf("%d", &cols);

    // Allocating memory for an array of pointers
    arr = malloc(rows * sizeof(int*));
    if (arr == NULL) {
        printf("Ошибка выделения памяти");
        return;
    }

    // Allocating memory for each row
    for (int i= 0; i < rows; i++) {
        arr[i] = malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Ошибка выделения памяти\n");
            return;
        }
    }

    // prompt for input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // find largest number
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if (arr[i][j] > maximum) {
                maximum = arr[i][j];
            }
        }
    }

    // output: result 
    printf("Наибольшее число среди вложенных массивов%d: \n", maximum);
}

int main() {
    find_largest_num();
    return 0;
}


/*
Using a for loop and the built-in function max(),
complete the code below so that it outputs the maximum element among all elements in the nested lists within the list list1
*/

// solution №1