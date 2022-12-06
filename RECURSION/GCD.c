//GCD
#include<stdio.h>

int GCD(int n,int m){
	if(n>=m && (n%m)==0){
		return m;
	}
	else{
		GCD(m, (n%m));
	}
}
int main(){
	int m,n;
	printf("Enter two number:\n");
	scanf("%d %d", &m, &n);
	printf("Greatest Common Divisor of %d and %d:: %d",m,n,GCD(m,n));
	return 0;
}
