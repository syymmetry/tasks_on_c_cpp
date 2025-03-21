#include <stdio.h>

void find_num() {

    int counter = 0;
    int array[20];
    int size = sizeof(array) / sizeof(array[0]);

    while (counter < 20 || counter != EOF) {
        int n;
        printf("Введите число %d: ", counter + 1);
        scanf("%d", &n);

        if (n == -1) {
            printf("Массив заполнен\n");
            break;
        }

        array[counter] = n;
        counter++;
    }

    int max_num = array[0];
    int secondMax_num = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] > max_num) {
            secondMax_num = max_num;
            max_num = array[i];
        } else if (array[i] > secondMax_num && array[i] != max_num) {
            secondMax_num = array[i];
        }
    }

    printf("Наибольшее число в массиве: %d; Второе наибольшее число в массиве: %d\n", max_num, secondMax_num);

}

int main() {
    find_num();
    return 0;
}