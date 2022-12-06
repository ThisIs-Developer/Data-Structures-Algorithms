//Tail Recursion

#include<stdio.h>

Tail_recursion(int n){
	if(n>0){
		printf("\nThe value of n is %d", n);
	}
	Tail_recursion(n-1);
}

int main(){
	int n;
	printf("Enter: ");
	scanf("%d", &n);
	Tail_recursion(n);
	return 0;
}
