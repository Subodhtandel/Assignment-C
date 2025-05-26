/*Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).
*/
#include <stdio.h>
int main(){
	int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n"); 

    for (int j = 1; j <= 10; j++) {
        printf("%d ", j);
    }
    printf("\n"); 

    int k = 1; 
    do {
        printf("%d ", k);
        k++;
    } while (k <= 10);
    printf("\n");  
}
/*
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
*/


