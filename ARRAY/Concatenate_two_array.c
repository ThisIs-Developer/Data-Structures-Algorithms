#include<stdio.h>
void create_array(int arr[], int size){
	int i;
	printf("Enter the elements: \n");
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}	
}
void display_array(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
void concatenate_array(int arr[], int brr[], int size1, int size2){
	int size, i, j;
	size=size1+size2;
	int crr[size];
	for(i=0;i<size1;i++){
		crr[i]=arr[i];
	}
	for(i=0, j=size1;j<size && i<size2;i++, j++){
		crr[j]=brr[i];
	}
	printf("\nConcatenated Array::  ");
	for(i=0;i<size;i++){
		printf("%d  ", crr[i]);
	}
}

int main(){
	int a[20], b[20];
	int size1, size2;
	printf("Enter the size of 1st Array: ");
	scanf("%d", &size1);
	printf("Enter the size of 2nd Array: ");
	scanf("%d", &size2);
    create_array(a, size1);
    create_array(b, size2);
    printf("\nARRAY-1::  ");
    display_array(a, size1);
	printf("\nARRAY-2::  ");    
    display_array(b, size2);
    printf("\nAfter Concatenation.........\n\n");
    concatenate_array(a, b, size1, size2);
    return 0;
}
