//Implementation of graph by adjacency matrix
#include <stdio.h>
#define MAX 5
int v,e;

// Add edges
void addEdge(int arr[][MAX], int i, int j) {
  arr[i][j] = 1;
  arr[j][i] = 1;
}

int main(){
	int i,j,v,e;
    int arr[MAX][MAX];
    char choice;
    printf("Enter the no of vertices:\n");
	scanf("%d", &v);
    for(i=0;i<v;i++){
	    for(j=0;j<v;j++){      //Initialize the matrix to zero
	        arr[i][j]=0;	
		}
	}
    for(i=0;i<v;i++){
        for(j=i;j<v;j++){
	        printf("Is there any edge between %d and %d ?",i+1,j+1);
	        scanf(" %c", &choice);
	        if(choice=='Y' || choice=='y'){
	            addEdge(arr, i, j);
	        }
	        else{
	            continue;
	        }
        }
    }
    printf("\nAdjacency matrix of the Graph::\n\n");  
    for(i=0;i<v;i++) {
        printf("%d: ",i+1);
        for(j=0;j<v;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
