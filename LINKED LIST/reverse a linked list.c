//Reverse a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int info;
	struct st *link;
}Node;

Node *start=NULL;

void add_end(int value){
	Node *newptr=NULL, *ptr;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->link=NULL;
	if(start==NULL){
		start=newptr;
	}
	else{
		ptr=start;
		while(ptr->link!=NULL){
			ptr=ptr->link;
		}
		ptr->link=newptr;
	}
}

void display(){
	Node *ptr=start;
	while(ptr){
		printf("%d->", ptr->info);
		ptr=ptr->link;
	}
	printf("NULL\n");
}

void reverse_list(){
	Node *ptr=NULL, *nptr=NULL;
    ptr=start;
    start=start->link;
    nptr=start;
    ptr->link=NULL;
    while(start!=NULL){
    	start=start->link;
    	nptr->link=ptr;
    	ptr=nptr;
    	nptr=start;
	}
	start=ptr;
}

int main(){
	char choice;
	int num;
	while(1){
		printf("Do you want to Enter? y/n?");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter the num: ");
			scanf("%d", &num);
			add_end(num);
		}
		else{
			break;
		}
		printf("\nLINKED LIST:\t");
		display();
	}
	printf("\nLINKED LIST:\t");
	display();
	
	printf("\nAfter Reversing: ");
	reverse_list();
	printf("\nLINKED LIST:\t");
	display();
	
	return 0;
}
