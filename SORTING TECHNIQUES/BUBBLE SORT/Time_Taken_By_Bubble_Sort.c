//Time taken by bubble sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i,j,range,choice;
	printf("Enter a limit of Random array: ");
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
	printf("\n\nSelect:\n1.Sort in ascending order\n2.Sort in descending order\n");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			for(i=0;i<range-1;i++){
		        for(j=i+1;j<range;j++){
			        if(arr[i]>arr[j]){
				        int temp=arr[i];
				        arr[i]=arr[j];
				        arr[j]=temp;
		        	}
		        }
	        }
	        break;
	        case 2:
	        	for(i=0;i<range-1;i++){
		            for(j=i+1;j<range;j++){
			            if(arr[i]<arr[j]){
				            int temp=arr[i];
				            arr[i]=arr[j];
				            arr[j]=temp;
			            }
		            }
	            }
	            default:
	            	break;
	}
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("\n\nAfter Using Bubble Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nIt takes %f seconds to execute", time_taken);
	return 0;
}
