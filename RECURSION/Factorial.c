#include<stdio.h>

int factorial(int num){
	if(num==0 || num==1){
		return 1;
	}
	else{
		return num*factorial(num-1);
	}
}

int main(){
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	printf("factorial of %d:: %d", num, factorial(num));
	return 0;
}
