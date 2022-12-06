//Traverse of an  array
#include<stdio.h>
#define MAX 20

int main() {
	int a[MAX];
	int size,i;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	if(size>MAX){
		printf("Invalid!!\n");
	}
	else{
		printf("Now, Enter the Element:\n");
	    for(i=0; i<size;i++){
	    	scanf("%d", &a[i]);
    	}	
	}
     printf("\nARRAY::\t");
	    for(i=0;i<size;i++){
		    printf("%d\t", a[i]);
    	}
	return 0;
}
