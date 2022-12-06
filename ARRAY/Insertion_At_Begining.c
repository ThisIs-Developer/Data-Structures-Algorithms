//Insertion at the beginning of the array
#include<stdio.h>
int main() {
	int a[50];
	int size,i,num;
	 printf("Enter the size of the array: ");
	 scanf("%d", &size);
	 if(size>50){
	 	printf("Overflow!!!!!");
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
		 printf("\nEnter the element you want to insert: ");
		 scanf("%d", &num);
		 for(i=size-1;i>=0;i--){
		 	a[i+1]=a[i];
		 }
		 a[0]=num;
		 size++;
		 printf("\nArray::\t");
		 for(i=0;i<size;i++){
		 	printf("%d\t", a[i]);
		 }
		 printf("\nNow size of the array: %d",size);
		 return 0;
	 }
}
