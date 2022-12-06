//Insertion at the end
#include<stdio.h>
int main() {
	int a[50];
	int size,i,num;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	if(size>50){
		printf("Overflow!!!");
	}
	else{
		printf("Enter the elements of the array: \n");
		for(i=0;i<size;i++){
			scanf("%d", &a[i]);
		}
		printf("\nArray::\t");
		for(i=0;i<size;i++){
			printf("%d\t", a[i]);
		}
		printf("\n");
		printf("Enter the num you want to insert: ");
		scanf("%d", &num); 
		a[size]=num;
		size++;
		printf("\nArray::\t");
		for(i=0;i<size;i++){
			printf("%d\t", a[i]);
		}
		printf("\nNow size of the array: %d", size);
	}
	return 0;
}
