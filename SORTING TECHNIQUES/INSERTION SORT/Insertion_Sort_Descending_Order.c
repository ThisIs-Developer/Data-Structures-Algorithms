//Insertion Sort(in descending order)
#include<stdio.h>
#define MAX 20
int steps=0,swp=0,comp=0;
void insert(int arr[], int temp, int i){
	int j;
	for(j=i-1;j>=0;j--){
		if(temp>arr[j]){
			arr[j+1]=arr[j];
			swp++;
			comp++;
		}
		else{
			comp++;
			break;
		}
	}
	arr[j+1]=temp;
}
void sort_insertion(int arr[], int size){
	int temp,i;
	for(i=1;i<size;i++){
		steps++;
		temp=arr[i];
		insert(arr, temp, i);
	}
}
int main(){
	int arr[MAX];
	int i,j,min,size;
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
	
	//insertion sort
	
	sort_insertion(arr, size);
	
	printf("\n\nAfter Using Insertion Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nNo. of Intermediate Step: %d\n", steps);
	printf("No. of comparing: %d\n", comp);
	printf("No. of Swapping: %d", swp);
	return 0;
}
