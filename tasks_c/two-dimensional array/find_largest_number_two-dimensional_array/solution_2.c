#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void find_largest_number(int **arr, int rows, int cols) {

    int maxnum = INT_MIN;

    // algorithm for finding the largest number in a nested array 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] > maxnum) {
                maxnum = arr[i][j];
            }
         }
    }
}

int main() {

    int array[5][4] = {
       {1, 7, 8, INT_MIN},
        {9, 7, 102, INT_MIN},
        {6, 106, 105, INT_MIN},
        {100, 99, 98, 103},
        {1, 2, 3, 4},
        NULL
    };

    int rows;
    scanf("%d", &rows);

    int cols;
    scanf("%d", &cols);

    find_largest_number(array, rows, cols);
    return 0;
}