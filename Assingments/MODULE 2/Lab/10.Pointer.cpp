/*
Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.
*/
#include <stdio.h>
int main() {
    int a = 10;      
    int *ptr;           

    ptr = &a;        
    printf("Original value of num: %d\n",a);

    *ptr = 20;         
    printf("value of a using pointer: %d\n",a);
}

