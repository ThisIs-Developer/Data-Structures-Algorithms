//Reverse a string using stack
#include<stdio.h>
#include<string.h>
#define MAX 50
int stack[MAX];
int Top=-1;

void push(char value){
	if(Top==MAX-1){
		printf("Stack Overflow!!\n");
	}
	else{
		Top++;
		stack[Top]=value;
	}
}

char pop(){
	char item;
	if(Top==-1){
		printf("Stack Underflow!!\n");
	}
	else{
		item=stack[Top];
		Top--;
		printf("%c", item);
	}
}

int main(){
	char st[50];
	printf("Enter String: ");
	gets(st);
	int len,i;
	len=strlen(st);
	for(i=0;i<len;i++){
		push(st[i]);
	}
	printf("\nReversed String: ");
	for(i=0;i<len;i++){
		pop();
	}
	return 0;
}
