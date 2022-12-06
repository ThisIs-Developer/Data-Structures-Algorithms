//linear search or sequential search
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i,flag=0;
int linear_search(int arr[], int data, int size){
	for(i=0;i<size&&flag==0;i++){
		if(arr[i]==data){
			flag=1;
			printf("\n%d found at %dth index", data, i);
		}
	}
	return flag;
}
int main(){
	int range,data;
    printf("Enter a limit for Random array: ");
    scanf("%d", &range);
    int arr[range];
	time_t t1;
	srand((unsigned)time(&t1));
	for(i=0;i<range;i++){
		arr[i]=rand()%50;
	}
	printf("ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nEnter data to search: ");
	scanf("%d", &data);
    //linear search
	linear_search(arr, data, range);
	if(flag==0){
		printf("\n%d NOT FOUND!!", data);
	}
	return 0;
}
