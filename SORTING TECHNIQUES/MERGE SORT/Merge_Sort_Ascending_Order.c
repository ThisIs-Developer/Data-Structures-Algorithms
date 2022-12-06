//merge sort(in ascending order)
#include<stdio.h>
#define MAX 20
int mg=0;

int merge(int arr[], int first, int mid, int last){
	mg++;
	int i,j,k;
	int brr[MAX];
	i=first;
	j=mid+1;
	k=first;
	while(i<=mid && j<=last){
		if(arr[i]<=arr[j]){
			brr[k]=arr[i];
			i++;
			k++;
		}
		else{
			brr[k]=arr[j];
			j++;
			k++;
		}
	}
	if(i>mid){
		while(j<=last){
			brr[k]=arr[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			brr[k]=arr[i];
			i++;
			k++;
		}
	}
	for(k=first;k<=last;k++){
		arr[k]=brr[k];
	}
}
int merge_sort(int arr[], int first, int last){
	int d=last-first+1,mid;
	if(first<last){
		mid=(first+last)/2;
		merge_sort(arr,first,mid);
		merge_sort(arr,mid+1,last);
		merge(arr,first,mid,last);
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
	
	//merge sort
	merge_sort(arr,0,size-1);
	printf("\n\nAfter Using Merge Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nNo. of merging: %d\n", mg);
	return 0;
}
