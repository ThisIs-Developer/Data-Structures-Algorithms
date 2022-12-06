#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int info;
	struct st* link;
}Node;

Node *Top=NULL;

void push(int value){
	Node *newptr=NULL;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->link=Top;
	Top=newptr;
}

void pop(){
	Node *temp=Top;
	if(Top==0){
		printf("Stack is empty!!");
	}
	else{
		Top=Top->link;
		printf("Popped:\t%d\n", temp->info);
		free(temp);
	}
}

void peek(){
	if(Top==0){
		printf("Stack is empty!\n");
	}
	else{
		printf("\nTop element:\t%d\n------------------\n", Top->info);
		printf("\nTop index: %d\n------------------\n", Top);
	}
}

void display(){
	Node *ptr=Top;
	while(ptr){
		printf(" %d\n---->\n", ptr->info);
		ptr=ptr->link; 
	}
	printf("NULL\n");
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
