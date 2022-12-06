//time taken by insertion sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int p;
void insert_asc(int arr[], int temp, int i){
	int j;
	for(j=i-1;j>=0;j--){
		if(temp<arr[j]){
			arr[j+1]=arr[j];
		}
		else{
			break;
		}
	}
	arr[j+1]=temp;
}

void insert_dsc(int arr[], int temp, int i){
	int j;
	for(j=i-1;j>=0;j--){
		if(temp>arr[j]){
			arr[j+1]=arr[j];
		}
		else{
			break;
		}
	}
	arr[j+1]=temp;
}
void sort_insertion(int arr[], int size){
	int temp,i;
	for(i=1;i<size;i++){
		temp=arr[i];
		if(p==1){
			insert_asc(arr,temp,i);
		}
		else if(p==2){
			insert_dsc(arr,temp,i);
		}
	}
}
int main(){
	int range,min,max,temp,i,j,choice;
	printf("Enter a limit for Random array: ");
	scanf("%d", &range);
	time_t t1;
	int arr[range];
	srand((unsigned)time(&t1));
	printf("\n");
	for(i=0;i<range;i++){
		arr[i]=rand()%50;
	}
	printf("Random Array:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	clock_t t;
	t=clock();
	printf("\nSelect:\n1.Sort in ascending order\n2.Sort in descending order\n");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			p=1;
			sort_insertion(arr,range);
			break;
			case 2:
				p=2;
				sort_insertion(arr,range);
			    break;
			    default:
			        break;		
	}
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("\n\nAfter Using Insertion Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nIt takes %f seconds to execute", time_taken);
	return 0;
}
