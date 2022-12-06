//Addition,subtraction,multiplication,division using Recursion
#include<stdio.h>

int addition(int a, int b){
	if(a==0){
		return b;
	}
	else if(b==0){
		return a;
	}
	else{
		return 1+addition(a, b-1);
	}
}

int subtraction(int a, int b){
	if(a==0){
		return b;
	}
	else if(b==0){
		return a;
	}
	else{
		return subtraction(a,b-1)-1;
	}
}
int multiplication(int a,int b){
	if(a==1){
		return b;
	}
	else if(b==1){
		return a;
	}
	else{
		return a+multiplication(a,b-1);
	}
}

int division(int a,int b){
	if(b==0){
		return 0;
	}
	else if(a-b==0){
		return 1;
	}
	else if(a<b){
		return 0;
	}
	else{
		return 1+division(a-b,b);
	}
}
int main(){
	int a,b,c;
	int op;
	char choice;
	while(1){
		printf("\nWant to continue? y/n?");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
    	    printf("Select operator for Operation::\n0.exit\n1.(+)\n2.(-)\n3.(*)\n4.(/)\n");
	        scanf("%d", &op);
	        switch(op){
		        case 1:
			        printf("Enter Two number: ");
	                scanf("%d %d", &a, &b);
	                printf("Addition: %d\n",addition(a,b));
	                break;
	                case 2:
			            printf("Enter Two number: ");
	                    scanf("%d %d", &a, &b);
	                    printf("Subtraction: %d\n",subtraction(a,b));
	                    break;
	                    case 3:
			                printf("Enter Two number: ");
	                        scanf("%d %d", &a, &b);
	                        printf("Multiplication: %d\n",multiplication(a,b));
	                        break;
	                        case 4:
			                    printf("Enter Two number: ");
	                            scanf("%d %d", &a, &b);
	                            printf("Division: %d\n",division(a,b));
	                            break;
	                            default:
		                            break;
		
	        }
    	}
	    else{
		    break;
	    }
    }
	return 0;
}
