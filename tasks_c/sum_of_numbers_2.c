#include <stdio.h>

void sum_of_numbers() {
    
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i < n; i++) {
        int temp = i * i;
        if (temp % 10 == 2 || temp % 10 == 5 || temp % 10 == 8) {
            sum += i;
        }
    }

    printf("%d\n", sum);
}

int main() {
    sum_of_numbers();
    return 0;
}