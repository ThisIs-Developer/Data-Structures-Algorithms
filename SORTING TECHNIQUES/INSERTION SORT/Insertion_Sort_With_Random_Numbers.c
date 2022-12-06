//insertion sort with random numbers
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int steps=0,swp=0,comp=0,p;
void insert_asc(int arr[], int temp, int i){
	int j;
	for(j=i-1;j>=0;j--){
		if(temp<arr[j]){
			arr[j+1]=arr[j];
			swp++;
			comp++;
		}
		else{
			comp++;
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
			swp++;
			comp++;
		}
		else{
			comp++;
			break;
		}
	}
	arr[j+1]=temp;
}
void sort_insertion(int arr[], int size){
	int temp,i;
	for(i=1;i<size;i++){
		steps++;
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
	printf("\n\nAfter Using Insertion Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nNo. of Intermediate Step: %d\n", steps);
	printf("No. of comparing: %d\n", comp);
	printf("No. of Swapping: %d", swp);
	return 0;
}
