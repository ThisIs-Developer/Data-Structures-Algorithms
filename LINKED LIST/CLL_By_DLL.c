#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	struct st* lptr;
	int info;
	struct st* rptr;
}Node;

Node *start=NULL;

void add(int value){
	Node *newptr=NULL, *ptr;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->rptr=newptr->lptr=NULL;
	if(start==NULL){
		start=newptr;
	}
	else{
		ptr=start;
		while(ptr->rptr!=NULL){
			ptr=ptr->rptr;
		}
		ptr->rptr=newptr;
		newptr->lptr=ptr;
		newptr->rptr=start;
		start->lptr=newptr;
	}
}

void display(){
	Node *ptr, *sptr;
	ptr=start;
	sptr=ptr->rptr;
	while(ptr->rptr!=start){
	 	printf("%d<->", ptr->info);
	 	ptr=ptr->rptr;
	}
	printf("NULL\n");
}

int main(){
	char choice;
	int count=0, value;
	while(1){
		printf("do you want to insert or not? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter number: ");
			scanf("%d", &value);
			add(value);
		}
		else{
			break;
		}
	}
	printf("\nLINKED LIST:\t");
	display();
	return 0;
}
