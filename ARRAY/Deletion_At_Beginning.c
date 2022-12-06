//Deletion at the beginning
#include<stdio.h>
int main() {
	int a[50];
	int size,i;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("Enter the element of the array: \n");
	for(i=0;i<size;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<size;i++){
		printf("%d\t", a[i]);
	}
	printf("\n\n");
		
		printf("After deleting........\n\n");
	   for(i=0;i<size-1;i++){
	    	a[i]=a[i+1];
	   }
	   size--;
	   for(i=0;i<size;i++){
		   printf("%d\t", a[i]);
	   }
	   printf("\nNow, the size of the array: %d", size);
	return 0;
}
