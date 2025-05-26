/*
Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.
*/
#include<stdio.h>
main(){
	int arr[5]={1,2,3,4,5};
		printf(" 1D Array: \n");
		int i;
	for(i = 0;i < 5; i++){
		printf("%d ", i, arr[i]);
	}
	int a[3][3]={
		{5, 3, 3},
		{8, 9, 6},
		{7, 9, 3}
	};
		printf("\n \n2D Array: \n");
		int sum=0;
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
			 printf("%d ", a[i][j]);
            sum = sum + a[i][j];
			}
		printf("\n");
		}
		 printf("\nSum = %d\n", sum);
}
/*
 1D Array:
0 1 2 3 4

2D Array:
5 3 3
8 9 6
7 9 3

Sum = 53
*/
