#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int n) {
    printf("Fibonacci series\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        printFibonacciSeries(n);
    }

    return 0;
}
