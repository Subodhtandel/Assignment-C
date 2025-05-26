/*
Write a C program that generates Pascal’s Triangle up to N rows using loops.
? Challenge: Implement the same program using a recursive function.
*/
#include <stdio.h>
int main() {
    int rows = 5;
    int i,j,k,num;

    for (i=0; i<rows; i++) {
        for (k=0; k<rows-i-1; k++) {
            printf("  ");
        }
        num=1;
        for (j=0; j<=i; j++) {
            printf("%4d", num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
}
/*
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1

*/
