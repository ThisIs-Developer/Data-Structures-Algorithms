//Deletion of array
#include<stdio.h>
int main() {
	int a[50];
	int size,i,pos;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	if(size>50){
		printf("Overflow!!");
	}
	else{
		printf("Enter the elements of the array: \n");
		for(i=0;i<size;i++){
			scanf("%d", &a[i]);
		}
		for(i=0;i<size;i++){
			printf("%d\t", a[i]);
		}
		printf("\n");
		printf("Enter the position in which element you want to delete: ");
		scanf("%d", &pos);
		if(pos<=0 || pos>size){
			printf("Invalid!");
		}
		else{
		for(i=pos-1;i<size-1;i++){
			a[i]=a[i+1];
		}
		size--;
		printf("After deleting.......\n");
		for(i=0;i<size;i++){
			printf("%d\t", a[i]);
		}
		printf("\nNow, size of the array: %d", size);
	}
}
	return 0;
}
