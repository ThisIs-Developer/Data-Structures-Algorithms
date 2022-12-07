#include<stdio.h>
#define MAX 255
int main() {
	int arr[MAX];
	int num,i;
	printf("Enter the size of the array= ");
	scanf("%d", &num);
	if(num>MAX)
	{
		printf("Invalid!!\n");
	}
	else
	{
		printf("Now, Enter the Element:\n");
		for(i=0; i<num;i++)
		{
	    		scanf("%d", &a[i]);
    		}	
	}
     	printf("\nARRAY=\t");
	for(i=0;i<num;i++)
	{
		 printf("%d\t", a[i]);
    	}
	return 0;
}
