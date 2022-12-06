//CLL by SLL

#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int info;
	struct st* link;
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
		newptr->link=start;
	}
}

void display(){
	Node *ptr=start;
//	do{
//		printf("%d->", ptr->info);
//		ptr=ptr->link;
//	}while(ptr!=start);
    while(ptr->link!=start){
    	printf("%d->", ptr->info);
    	ptr=ptr->link;
	}
}

int main(){
	int num;
	char choice;
	while(1){
		printf("Do you want to Enter? y/n?");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter num: ");
			scanf("%d", &num);
			add_end(num);
		}
		else{
			break;
		}
		printf("CIRCULAR LINKED LIST:\t");
		display();
	}
	printf("CIRCULAR LINKED LIST:\t");
	display();
	return 0;
}
