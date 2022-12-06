//time taken by merge sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int z,range;

int merge(int arr[], int first, int mid, int last){
	int i,j,k;
	int brr[range];
	i=first;
	j=mid+1;
	k=first;
	while(i<=mid && j<=last){
		if(z==1){
			if(arr[i]<=arr[j]){
		    	brr[k]=arr[i];
			    i++;
			    k++;
		    }
		    else{
			    brr[k]=arr[j];
			    j++;
			    k++;
		    }
		}
		else if(z==2){
			if(arr[i]>=arr[j]){
			    brr[k]=arr[i];
			    i++;
			    k++;
		    }
		    else{
			    brr[k]=arr[j];
			    j++;
			    k++;
		    }    
		}
	}
	if(i>mid){
		while(j<=last){
			brr[k]=arr[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			brr[k]=arr[i];
			i++;
			k++;
		}
	}
	for(k=first;k<=last;k++){
		arr[k]=brr[k];
	}
}
int merge_sort(int arr[], int first, int last){
	int d=last-first+1,mid;
	if(first<last){
		mid=(first+last)/2;
		merge_sort(arr,first,mid);
		merge_sort(arr,mid+1,last);
		merge(arr,first,mid,last);
	}
}

int main(){
	int min,max,temp,i,j,choice;
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
			merge_sort(arr,0,range-1);
			break;
			case 2:
				z=2;
				merge_sort(arr,0,range-1);
				break;
			    default:
			        break;		
	}
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("\n\nAfter Using Merge Sort......\n");
	printf("\nSORTED ARRAY:: ");
	for(i=0;i<range;i++){
		printf("%d  ", arr[i]);
	}
	printf("\nIt takes %f seconds to execute", time_taken);
	return 0;
}
