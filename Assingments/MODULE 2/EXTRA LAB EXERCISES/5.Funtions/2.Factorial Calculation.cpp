/*
Write a C program that calculates the factorial of a given number using a function.
? Challenge: Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers.
*/
#include <stdio.h>
#include <time.h>
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    clock_t start, end;
    double time_recursive, time_iterative;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    start = clock();
    unsigned long long fact_iter = factorialIterative(num);
    end = clock();
    time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    unsigned long long fact_rec = factorialRecursive(num);
    end = clock();
    time_recursive = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nFactorial of %d (Iterative) = %llu", num, fact_iter);
    printf("\nTime taken (Iterative): %f seconds", time_iterative);
    printf("\n\nFactorial of %d (Recursive) = %llu", num, fact_rec);
    printf("\nTime taken (Recursive): %f seconds\n", time_recursive);
}

