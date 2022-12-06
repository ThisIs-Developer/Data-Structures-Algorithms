//selection sort(in descending order)
#include<stdio.h>
#define MAX 20

int main(){
	int arr[MAX];
	int i,j,max,size,steps=0,swp=0,comp=0;
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
	
	//selection sort
	
	for(i=0;i<size-1;i++){
		steps++;
		max=i;
		for(j=i+1;j<size;j++){
			comp++;
			if(arr[j]>arr[max]){
				max=j;
			}
		}
		if(max!=i){
	        int temp=arr[i];
		    arr[i]=arr[max];
		    arr[max]=temp;
		    swp++;
	    }
	}

	printf("\n\nAfter Using Selection Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nNo. of Intermediate Step: %d\n", steps);
	printf("No. of comparing: %d\n", comp);
	printf("No. of Swapping: %d", swp);
	return 0;
}
