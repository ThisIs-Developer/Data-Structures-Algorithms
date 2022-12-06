//Circular Queue using Array
#include<stdio.h>
#define MAX 20
int Queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int value){
	if(((rear+1)%MAX)==front){
		printf("Queue Overflow!!\n");
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		Queue[rear]=value;
	}
	else{
		rear=(rear+1)%MAX;
		Queue[rear]=value;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		printf("Queue is Empty!!\n");
	}
	else if(front==rear){
		rear=front=-1;
	}
	else{
		int item=Queue[front];
		front=(front+1)%MAX;
	}
}

void display(){
	int i=front;
	if(front==-1 && rear==-1){
		printf("Queue is Empty!!\n");
	}
	else{
		while(i!=rear){
			printf("%d  ", Queue[i]);
			i=(i+1)%MAX;
		}
		printf("%d  ", Queue[rear]);
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
