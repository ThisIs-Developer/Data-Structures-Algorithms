//Non-Tail Recursion

#include<stdio.h>

int non_tail_recursion(int n){
	if(n>0){
		non_tail_recursion(n-1);
		printf("\nNon-tail recursive call");
		non_tail_recursion(n-1);
	}
}

int main(){
	int n;
	printf("Enter: ");
	scanf("%d", &n);
	non_tail_recursion(n);
	return 0;
}
