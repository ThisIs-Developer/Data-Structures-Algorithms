//Deletion at the end
#include<stdio.h>
int main() {
	int a[50];
	int size,i,temp;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("Enter the element of the array: \n");
	for(i=0;i<size;i++){
		scanf("%d", &a[i]); 
	}
	printf("\nArray:  ");
	for(i=0;i<size;i++){
		printf("%d\t", a[i]);
	}
	printf("\n\n");
    printf("After deleting........\n\n");
	size--;
	printf("\nArray:  ");
	for(i=0;i<size;i++){
		printf("%d\t", a[i]);
    }
	printf("\nNow, the size of the array: %d", size);	
	return 0;
}
