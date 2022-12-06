//Stack using array

#include<stdio.h>
#define N 5
int stack[N];
int top=-1;

void push(int value){
	if(top==N-1){
		printf("Stack Overflow!!\n");
	}
	else{
		top++;
		stack[top]=value;
	}
}

void pop(){
	int item;
	if(top==-1){
		printf("Stack underflow!!\n");
	}
	else{
		item=stack[top];
		top--;
		printf("Popped:  %d\n", item);
	}
}

void peek(){
	if(top==-1){
		printf("Stack is empty!!\n");
	}
	else{
		printf("\nTop element:\t%d\n------------------\n", stack[top]);
		printf("\nTop index: %d\n------------------\n", top);
	}
}

void display(){
	int i;
	for(i=top; i>=0;i--){
		printf(" %d\n----\n", stack[i]);
	}
}

int main(){
	char choice;
	int value;
	while(1){
		printf("Do you want to insert: y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter value: ");
			scanf("%d", &value);
			push(value);
		}
		else{
			break;
		}
	printf("\nSTACK::\n\n");
	display();
	peek();
	}
	printf("\nSTACK::\n\n");
	display();
	peek();
	while(1){
		printf("Do you want to delete: y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			pop();
		}
		else{
			break;
		}
	printf("\nSTACK::\n\n");
	display();
	peek();
	}
	printf("\nSTACK::\n\n");
	display();
	peek();	
	return 0;
}
