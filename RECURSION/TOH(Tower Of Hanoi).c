//Tower of Hanoi
#include<stdio.h>
int count=0;

int TOH(int n, char S, char A, char D){
	if(n==1){
		printf("Move disc %d from tower %c to tower %c\n",n, S, D);
		count++;
	}
	else{
		TOH(n-1,S,D,A);
		printf("Move disc %d from tower %c to tower %c\n",n, S, D);
		count++;
		TOH(n-1,A,S,D);
	}
	return count;
}

int main(){
	int n,c;
	printf("Enter no. of disc. : ");
	scanf("%d", &n);
	printf("\nMovement of Discs.::\n\n");
	TOH(n,'S','A','D');
	printf("\nNo. of Minimum Discs Movement:: %d", count);
	return 0;
}
