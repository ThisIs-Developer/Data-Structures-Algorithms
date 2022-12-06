//Insertion of array at any position
#include<stdio.h>

int main(){
	int a[50];
	int i,size,num,pos;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	if(size>50){
		printf("Overflow!!!");
	}
	else{
		printf("Enter the elements :\n");
		for(i=0;i<size;i++){
		scanf("%d", &a[i]);
	}
	printf("\nArray::\t");
	for(i=0;i<size;i++){
		printf("%d\t", a[i]);
	}
	printf("\nSize of the array: %d\n", size);
	printf("\nEnter data you want to insert: ");
	scanf("%d", &num);
	printf("\nEnter position: ");
	scanf("%d", &pos);
	for(i=size-1;i>=pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	size++;
	}
	printf("\nArray::\t");
	for(i=0;i<size;i++){
		printf("%d\t", a[i]);
	}
	printf("\nSize of the array: %d", size);
	return 0;
}
