//Parentheses Checking
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

int pop(){
	char item;
	if(Top==-1){
		printf("Stack Underflow!!\n");
	}
	else{
		item=stack[Top];
		Top--;
	}
}

int check_pair(char val1, char val2){
	if((val1=='(' && val2==')') || (val1=='{' && val2=='}') || (val1=='[' && val2==']')){
		return 1;
    }
    else{
    	return 0;
	}
}

int check(char exp[]){
	int i;
	char temp;
	for(i=0;i<strlen(exp);i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
			push(exp[i]);
		}
		else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
			temp=pop();
			if(check_pair(temp, exp[i])==1){
			    pop();	
			}
		}
    }
    if(Top==-1){
    	return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char arr[MAX];
	int valid;
	printf("Enter Expression: ");
	gets(arr);
	valid=check(arr);
	if(valid==1){
		printf("VALID EXPRESSION , BALANCED PARENTHESES!!\n");
	}
	else{
		printf("INVALID EXPRESSION, PARENTHESES ARE NOT BALANCED!!\n");
	}
	return 0;
}
