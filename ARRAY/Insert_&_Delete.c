#include<stdio.h>
#define SIZE 50

void display(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
			printf("%d\t", arr[i]);
	}
	printf("\nSize of the array is: %d\t\t", size);
}
int main(){
	int arr[SIZE];
	char choice;
	int num, choose, pos, size=0,i;
	while(1){
		printf("Do you want to Enter? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter where you want to add:\n1. At the end\n2. At beggining\n3. At any position\n");
            scanf("%d", &choose);
            switch(choose){
            	case 1:
            		printf("Enter num to add: ");
			        scanf("%d", &num);
			        if(size>SIZE){
	                	printf("\nINVALID!!!\n");
	                }
	                else{
	                    arr[size]=num;
	                    size++;	
	                }
			        fflush(stdin);
			        break;
			        case 2:
			        	printf("Enter num to add: ");
			            scanf("%d", &num);
			            if(size>SIZE){
	                    	printf("\nINVALID!!!\n");
	                    }
	                    else{
		                    for(i=size-1;i>=0;i--){
		 	                    arr[i+1]=arr[i];
		                    }
		                    arr[0]=num;
		                    size++;
	                    }
			            fflush(stdin);
			            break;
			            case 3:
			            	printf("Enter position: ");
			            	scanf("%d", &pos);
			            	printf("Enter num: ");
			            	scanf("%d", &num);
			            	if(size>SIZE){
		                        printf("\nINVALID!!!\n");
	                        }
	                        else{
		                        for(i=size-1;i>=pos-1;i--){
		                            arr[i+1]=arr[i];
	                            }
	                            arr[pos-1]=num;
	                            size++;
	                        }
			            	fflush(stdin);
			            	break;
			            	default:
 			            		break;
			}
		}
		else{
			break;
		}
	printf("\nArray::\t");
	display(arr, size);
	}
	printf("\nArray::\t");
	display(arr, size);
	
	
	while(1){
		printf("\n\nDo you want to Delete? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter where you want to delete:\n1. At the end\n2. At beggining\n3. At any position\n");
            scanf("%d", &choose);
            switch(choose){
            	case 1:
            		if(size==0){
		                printf("\nEMPTY!!\n");
	                }
	                else{
		                size--;
	                }
            		fflush(stdin);
			        break;
			        case 2:
			        	if(size==0){
		                    printf("\nEMPTY!!\n");
	                    }
                    	else{
		                    for(i=0;i<size-1;i++){
	    	                arr[i]=arr[i+1];
	                        }
	                    size--;
	                    } 
			        	fflush(stdin);
			            break;
			            case 3:
			            	printf("\nEnter the position: ");
			            	scanf("%d", &pos);
			                if(size==0){
	                         	printf("\nEMPTY!!\n");
	                        }
	                        else{
		                        for(i=pos-1;i<size-1;i++){
			                        arr[i]=arr[i+1];
		                        }
		                        size--;
	                        }
			                fflush(stdin);
			            	break;
			            	default:
			            		break;
			}
		}
		else{
			break;
		}
	printf("\nNow, Array::\t");
	display(arr, size);
	}
	printf("\nNow, Array::\t");
	display(arr,  size);
	
	return 0;
}
