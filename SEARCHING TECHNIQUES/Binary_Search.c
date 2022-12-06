//binary search
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int flag=0;

int binary_search(int arr[], int data, int size){
	int lb=0,ub=size-1;
	int mid=(lb+ub)/2;
	while(lb<=ub && arr[mid]!=data){
	    if(data==arr[mid]){
	    	return mid;
    	}
	    else if(data<arr[mid]){
		    ub=mid-1;
	    }
	    else if(data>arr[mid]){
		    lb=mid+1;
	    }
	    mid=(lb+ub)/2;
    }
    if(arr[mid]==data){
    	printf("%d found at %dth index", data, mid);
	}
	else{
		printf("%d NOT FOUND!!\n",data);
	}
}
int main(){
	int i,j,range,data;
    printf("Enter a limit for Random array: ");
    scanf("%d", &range);
    int arr[range];
	time_t t1;
	srand((unsigned)time(&t1));
	for(i=0;i<range;i++){
		arr[i]=rand()%50;
	}
	printf("ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	for(i=0;i<range-1;i++){
		for(j=i+1;j<range;j++){   //sorting of array
			if(arr[j]<arr[i]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n\n**We know, Binary Searching works on Sorted array...\n\n");
	printf("SORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nEnter data to search: ");
	scanf("%d", &data);
    //binary search
    printf("For the sorted array::  ");
	binary_search(arr, data, range);
	return 0;
}
