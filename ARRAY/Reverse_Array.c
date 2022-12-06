//Reverse an Array
#include<stdio.h>

int main(){
	int arr[20];
	int size,i,j;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	printf("Enter the elemnts of the array:\n");
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	printf("\nARRAY:: ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	for(i=0,j=size-1;i<size/2;i++,j--){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("\n\nAfter reversing....\n\n");
	printf("REVERSED ARRAY::  ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	return 0;
}
