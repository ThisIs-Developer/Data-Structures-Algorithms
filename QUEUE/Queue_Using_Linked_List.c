 //Queue using Linked List
#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int info;
	struct st* link;
}Node;

Node *front=NULL;
Node *rear=NULL;

void enqueue(int value){
	Node *newptr=NULL, *ptr;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->link=NULL;
	if(front==NULL && rear==NULL){
		rear=front=newptr;
	}
	else{
		rear->link=newptr;
		rear=newptr;
	}
}

void dequeue(){
	Node *ptr=front;
	if(front==NULL && rear==NULL){
		printf("Queue is EMPTY!!\n");
	}
	else{
		printf("\nDeleted Element: %d", front->info);
		front=front->link;
		free(ptr);
	}	
}

void display(){
	Node *ptr=front;
	if(front==NULL){
		printf("Queue is EMPTY!!");
	}
	else{
	    while(ptr){
		    printf("%d->", ptr->info);
		    ptr=ptr->link;
	    }
	printf("NULL\t\t");
    }
}

int main(){
	int num;
	char choice;
	while(1){
		printf("Do you want to Enter? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
            printf("\nEnter num to add: ");
		    scanf("%d", &num);
	        enqueue(num);
	        fflush(stdin);
		}
		else{
			break;
		}
		printf("\nQUEUE::  ");
		display();	
    }
    printf("\nQUEUE::  ");
	display();
	while(1){
		printf("\tDo you want to Delete? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
	        dequeue();
	        fflush(stdin);
		}
		else{
			break;
		}
		printf("\nQUEUE::  ");
		display();
    }
    printf("\nQUEUE::  ");
	display();
    return 0;
}
