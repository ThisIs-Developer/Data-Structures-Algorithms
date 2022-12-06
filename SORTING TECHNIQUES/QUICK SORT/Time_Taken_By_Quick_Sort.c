//time taken by quick sort 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int z;

int partition_asc(int arr[], int p, int r){
	int x,i,j,temp;
	x=arr[r];//pivot element
	i=p-1;
	for(j=p;j<r;j++){
		if(arr[j]<=x){
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[r];
	arr[r]=temp;
	return i+1;
}
int partition_dsc(int arr[], int p, int r){
	int x,i,j,temp;
	x=arr[r];//pivot element
	i=p-1;
	for(j=p;j<r;j++){
		if(arr[j]>=x){
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[r];
	arr[r]=temp;
	return i+1;
}
int QUICKSORT(int arr[], int p, int r){
	int q;
	if(p<r){
		if(z==1){
			q=partition_asc(arr,p,r);
		}
		else if(z==2){
			q=partition_dsc(arr,p,r);
		}
    	QUICKSORT(arr,p,q-1);
	    QUICKSORT(arr,q+1,r);	
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
			z=1;
			QUICKSORT(arr,0,range-1);
			break;
			case 2:
				z=2;
				QUICKSORT(arr,0,range-1);
				break;
			    default:
			        break;		
	}
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("\n\nAfter Using Quick Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nIt takes %f seconds to execute", time_taken);
	return 0;
}
