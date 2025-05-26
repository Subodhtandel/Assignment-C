/*
Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
? Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.
*/

#include <stdio.h>
int recursiveCalls = 0;
int fibonacciRecursive(int n) {
    recursiveCalls++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
int fibonacciIterative(int n) {
    int a = 0, b = 1, next, i;
    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n, i;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);
    printf("\nFibonacci sequence up to %d terms (recursive):\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }
    int nthRecursive = fibonacciRecursive(n - 1);
    int calls = recursiveCalls;

    int nthIterative = fibonacciIterative(n - 1);
    printf("\n\nNth Fibonacci number using recursion: %d", nthRecursive);
    printf("\nRecursive calls made: %d", calls);

    printf("\n\nNth Fibonacci number using iteration: %d", nthIterative);
}

