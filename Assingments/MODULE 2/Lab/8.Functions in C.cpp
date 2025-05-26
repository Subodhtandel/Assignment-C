/*
Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.
*/
#include <stdio.h>
long long factorial(int n);

int main() {
  int num;
  printf("Enter a non-negative integer: ");
  scanf("%d", &num);
  if (num < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    long long fact = factorial(num);
    printf("Factorial of %d = %lld\n", num, fact);
  }
}

long long factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
/*
Enter a non-negative integer: 12
Factorial of 12 = 479001600
*/
