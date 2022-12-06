//Queue using Array
#include<stdio.h>
#define MAX 20
int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int value){
	if(rear==MAX-1){
		printf("Queue Overflow!!\n");
	}
	else if(rear==-1 && front==-1){
		rear=front=0;
		queue[rear]=value;
	}
	else{
		rear++;
		queue[rear]=value;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		printf("Queue is EMPTY!!\n");
	}
	else if(rear==front){
	    rear=front=-1;
	}
	else{
		printf("Deleted element: %d\n", queue[front]);
		front++;
	}
}

void display(){
	int i;
	if(rear==-1 && front==-1){
		printf("Queue is Empty!!\n");
	}
	else{
		for(i=front;i<rear+1;i++){
			printf("%d  ", queue[i]);
		}
		printf("\t\t");
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

