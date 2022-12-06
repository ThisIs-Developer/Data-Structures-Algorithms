#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int info;
	struct st *link;
}Node;

Node *start1=NULL;
Node *start2=NULL;
Node *start3=NULL;

void add_end(int value, Node *start, int p){
	Node *newptr=NULL, *ptr;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->link=NULL;
	if(p==1){
	if(start1==NULL){
		start1=newptr;
	}
	else{
		ptr=start1;
		while(ptr->link!=NULL){
			ptr=ptr->link;
		}
		ptr->link=newptr;
	}		
    }
    else if(p==2){
    	if(start2==NULL){
    		start2=newptr;
		}
		else{
			ptr=start2;
			while(ptr->link!=NULL){
				ptr=ptr->link;
			}
			ptr->link=newptr;
		}
	}
}

void display(Node *start){
	Node *ptr=start;
	while(ptr){
		printf("%d->", ptr->info);
		ptr=ptr->link;
	}
	printf("NULL\n");
}


void merging(Node *start1, Node *start2){
	Node *ptr1=start1, *ptr2=start2;
	start3=start1;
	while(ptr1->link!=NULL){
		ptr1=ptr1->link;
	}
	ptr1->link=start2;
}

void display_1st(Node *start){
	Node *ptr=start;
	while(ptr->link!=start2->link){
		printf("%d->", ptr->info);
		ptr=ptr->link;
	}
	printf("NULL\n");
}

int main(){
	char choice;
	int num, choose, p=0;
	printf("Enter the details for first list: \n");
	while(1){
		printf("Do you want to Enter? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
            printf("Enter num to add: ");
		    scanf("%d", &num);
		    p=1;
	        add_end(num, start1, p);
	        fflush(stdin);
		}
		else{
			break;
		}
	printf("\n1ST LINKED LIST:\t");
	display(start1);
	}
	printf("\n1ST LINKED LIST:\t");
	display(start1);
	
	printf("\nEnter the details for second list: \n");
	while(1){
		printf("Do you want to Enter? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
            printf("Enter num to add: ");
		    scanf("%d", &num);
		    p=2;
	        add_end(num, start2, p);
	        fflush(stdin);
		}
		else{
			break;
		}
	printf("\n2ND LINKED LIST:\t");
	display(start2);
	}
	printf("\n2ND LINKED LIST:\t");
	display(start2);
	
	printf("\nSo, now two linked lists are:\n");
	display(start1);
	display(start2); 
	
	merging(start1, start2);
	printf("Add of two list is:  ");
	display(start3);
	
	printf("\n\nLINKED LISTS:\n");
	display_1st(start1);
	display(start2);
	printf("CONCATENATED LINKED LIST:\t");
	display(start3);
	
	return 0;
}
