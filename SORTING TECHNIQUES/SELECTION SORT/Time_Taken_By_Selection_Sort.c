//time taken by selection sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
			for(i=0;i<range-1;i++){
				min=i;
				for(j=i+1;j<range;j++){
					if(arr[j]<arr[min]){
						min=j;
					}
				}
				if(min!=i){
					temp=arr[i];
					arr[i]=arr[min];
					arr[min]=temp;
				}
			}
			break;
			case 2:
				for(i=0;i<range-1;i++){
				    max=i;
				    for(j=i+1;j<range;j++){
					    if(arr[j]>arr[max]){
						    max=j;
					    }
				    }
				    if(max!=i){
					    temp=arr[i];
					    arr[i]=arr[max];
					    arr[max]=temp;
			    	}
			    }
			    break;
			    default:
			        break;		
	}
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("\n\nAfter Using Selection Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nIt takes %f seconds to execute", time_taken);
	return 0;
}
