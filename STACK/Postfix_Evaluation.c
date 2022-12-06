//Evaluate postfix expression
#include<stdio.h>
#include<ctype.h>
#define MAX 20
int stack[MAX];
int Top=-1;

void push(char value){
	if(Top==MAX-1){
		printf("STACK OVERFLOW!!\n");
	}
	else{
		stack[++Top]=value;
	}
}

int pop(){
	if(Top==-1){
		printf("Stack is EMPTY!!\n");
	}
	else{
		return stack[Top--];	
	}
}
int Top_element(){
	return stack[Top];
}

int main(){
	char exp[20];
	char *e;
	int i=0,n1,n2,n3,num;
	printf("Enter Postfix Expression: ");
	scanf("%s", exp);
	e=exp;
	while(*e!='\0'){
		if(isdigit(*e)){
			num=*e-48;
			push(num);
		}
		else{
			n1=pop();
			n2=pop();
			switch(*e){
				case '+':
					n3=n1+n2;
					break;
					case '-':
						n3=n2-n1;
						break;
						case '*':
							n3=n1*n2;
							break;
							case '/':
								n3=n2/n1;
								break;
								default:
									break;
			}
			push(n3);  
		} 
		e++;
	}
	printf("\nRESULT::  %d", pop());
	return 0;
}
