//selection sort with random numbers
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int range,min,max,temp,i,j,choice,steps=0,comp=0,swp=0;
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
			for(i=0;i<range-1;i++){
				min=i;
				steps++;
				for(j=i+1;j<range;j++){
					comp++;
					if(arr[j]<arr[min]){
						min=j;
					}
				}
				if(min!=i){
					temp=arr[i];
					arr[i]=arr[min];
					arr[min]=temp;
					swp++;
				}
			}
			break;
			case 2:
				for(i=0;i<range-1;i++){
				    max=i;
				    steps++;
				    for(j=i+1;j<range;j++){
					    comp++;
					    if(arr[j]>arr[max]){
						    max=j;
					    }
				    }
				    if(max!=i){
					    temp=arr[i];
					    arr[i]=arr[max];
					    arr[max]=temp;
				    	swp++;
			    	}
			    }
			    break;
			    default:
			        break;		
	}
	printf("\n\nAfter Using Selection Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nNo. of Intermediate Step: %d\n", steps);
	printf("No. of comparing: %d\n", comp);
	printf("No. of Swapping: %d", swp);
	return 0;
}
