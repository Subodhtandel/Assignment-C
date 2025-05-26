/*
Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
? Challenge: Extend the program to sort the array in ascending order.
*/
#include<stdio.h>
int main(){
	int arr[10],i,min,max,n,temp;
	printf("\n Enter the 10 integers: ");
	for(i=0; i<10; i++){
	scanf("%d",&arr[i]);
}
	min=arr[0];
	max=arr[0];
	
	for(i=1; i<10; i++){
		if(arr[i]<min)
		min=arr[i];
		if(arr[i]>max)
		max=arr[i];
	}
	printf("Minimum element=%d\n",min);
	printf("Maximum element=%d\n",max);
	
	 for(i=0; i<10; i++) {
        for(int j=i+1; j<10; j++) {
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
}
/*

 Enter the 10 integers: 5
8
9
5
1
9
2
6
9
4
Minimum element=1
Maximum element=9
Sorted array in ascending order:
1 2 4 5 5 6 8 9 9 9


*/
