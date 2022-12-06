//quick sort(in ascending order)
#include<stdio.h>
#define MAX 20
int swp=0, part=0, steps=0,comp=0;

int partition(int arr[], int p, int r){
	int x,i,j,temp;
	part++;
	x=arr[r];//pivot element
	i=p-1;
	for(j=p;j<r;j++){
		if(arr[j]<=x){
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			swp++;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[r];
	arr[r]=temp;
	swp++;
	return i+1;
}
int QUICKSORT(int arr[], int p, int r){
	steps++;
	int q;
	if(p<r){
	    q=partition(arr,p,r);
    	QUICKSORT(arr,p,q-1);
	    QUICKSORT(arr,q+1,r);	
	}
}

int main(){
	int arr[MAX];
	int i,j,size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter the elements:\n");
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	printf("ARRAY:: ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	
	//quick sort
	
	QUICKSORT(arr, 0, size-1);
	printf("\n\nAfter Using Quick Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nNo. of Intermediate Step: %d\n", steps);
	printf("No. of partition: %d\n", part);
	printf("No. of Swapping: %d", swp);
	return 0;
}
