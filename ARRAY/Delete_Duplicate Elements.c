//Delete duplicate elements
#include<stdio.h>

int main(){
	int arr[20];
	int size,i,j,k,count=0;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	printf("\nARRAY::  ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nDuplicate elements:\n");
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				printf("%d\n",arr[j]);
				for(k=j;k<size-1;k++){
					arr[k]=arr[k+1];
				}
				size--;
				j--;
				count++;
				break;
			}
		}
	}
	printf("No. of Duplicate elements: %d", count);
	printf("\nNow, ARRAY::  ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	return 0;
}
