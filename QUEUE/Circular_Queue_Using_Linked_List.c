//Circular queue using linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int info;
	struct st* link;
}Node;

Node *front=NULL;
Node *rear=NULL;

void enqueue(int value){
	Node *newptr=NULL;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->link=NULL;
	if(rear==0){
		front=rear=newptr;
		rear->link=front;
	}
	else{
		rear->link=newptr;
		rear=newptr;
		rear->link=front;
	}
}

void dequeue(){
	Node *ptr=front;
	if(front==NULL && rear==NULL){
		printf("Queue is EMPTY!!\n");
	}
	else if(front==rear){
		front=rear=NULL;
		free(ptr);
	}
	else{
		front=front->link;
		rear->link=front;
		free(ptr);
	}
}

void display(){
	Node *ptr=front;
	if(front==NULL && rear==NULL){
		printf("Queue is EMPTY!!\n");
	}
	else{
		while(ptr->link!=front){
			printf("%d->",ptr->info);
			ptr=ptr->link;
		}
		printf("%d->NULL\t\t",ptr->info);
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
		printf("QUEUE::  ");
		display();	
    }
    printf("\nQUEUE::  ");
	display();
	while(1){
		printf("Do you want to Delete? y/n? ");
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
