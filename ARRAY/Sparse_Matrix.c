 //Checking Sparse Matrix and Triplet representation
 #include<stdio.h>

 int main(){
 	int arr[20][20];
 	int m,n,i,j,count=0;
 	printf("Enter no. of rows & columns:\n");
 	scanf("%d %d", &m, &n);
 	printf("Enter the elemnts of the matrix:\n");
 	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			scanf("%d", &arr[i][j]);
		 }
	}
	printf("\nARRAY::\n");
	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			printf("%d\t", arr[i][j]);
		 }
		 printf("\n");
	}
	for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			if(arr[i][j]==0){
 				++count;
			 }
		 }
	}
	if(count>((m*n)/2)){
		printf("\nIt is A SPARSE MATRIX.\n\nTRIPLET REPRESENTATION::\n\n");
		//Triplet representation
		printf("\nROW:: ");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(arr[i][j]!=0){
					printf("%d  ", i);
				}
			}
		}
		printf("\nCOLUMN:: ");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(arr[i][j]!=0){
					printf("%d  ", j);
				}
			}
		}
		printf("\nVALUE:: ");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(arr[i][j]!=0){
					printf("%d  ", arr[i][j]);
				}
			}
		}
	}	
	else{
		printf("\nIt is not a SPARSE MATRIX.\n");
		printf("No. of zeroes...%d", count);
	}
	return 0;
 }
