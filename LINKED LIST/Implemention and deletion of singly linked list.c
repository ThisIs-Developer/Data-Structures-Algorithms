//Insertion and Deletion of SINGLY LINKED LIST(SLL)

#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	int info;
	struct st* link;
}Node;

Node *start=NULL;

void add_end(int value){
	Node *newptr=NULL, *ptr=NULL;
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

void add_beg(int value){
	Node *newptr=NULL, *ptr=NULL;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->link=NULL;
	if(start==NULL){
		start=newptr;
	}
	else{
		newptr->link=start;
		start=newptr;
	}
}

void add_anypos(int value, int pos){
	int steps=1;
	Node *newptr=NULL, *ptr=start;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->link=NULL;
	while(steps<pos-1){
		ptr=ptr->link;
		steps++;
	}
	if(pos==1){
		newptr->link=ptr;
		start=newptr;
	}
	else{
		newptr->link=ptr->link;
		ptr->link=newptr;
	}
}

void display(){
	Node *ptr=NULL;
	ptr=start;
	while(ptr){
		printf("%d->", ptr->info);
		ptr=ptr->link;
	}
	printf("NULL\n");
}

void delete_end(){
	Node *ptr=start, *nptr=start;
	while(ptr->link!=NULL){
		nptr=ptr;
		ptr=ptr->link;
	}
	nptr->link=NULL;
	free(ptr);
}

void delete_beg(){
	Node *ptr=start;
	start=start->link;
	free(ptr);
}

void delete_anypos(){
	int steps=1, pos;
	Node *pptr=start, *nptr;
	printf("Enter position: ");
	scanf("%d", &pos);
	while(steps<pos-1){
		pptr=pptr->link;
		steps++;
	}
	nptr=pptr->link;
	pptr->link=nptr->link;
	free(nptr);
}

int main(){
	char choice;
	int num, choose, pos;
	while(1){
		printf("Do you want to Enter? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter where you want to add:\n1. At the end\n2. At beggining\n3. At any position\n");
            scanf("%d", &choose);
            switch(choose){
            	case 1:
            		printf("Enter num to add: ");
			        scanf("%d", &num);
			        add_end(num);
			        fflush(stdin);
			        break;
			        case 2:
			        	printf("Enter num to add: ");
			            scanf("%d", &num);
			            add_beg(num);
			            fflush(stdin);
			            break;
			            case 3:
			            	printf("Enter position: ");
			            	scanf("%d", &pos);
			            	printf("Enter num: ");
			            	scanf("%d", &num);
			            	add_anypos(num, pos);
			            	fflush(stdin);
			            	break;
			            	default:
			            		break;
			}
		}
		else{
			break;
		}
	printf("\nLINKED LIST:\t");
	display();
	}
	printf("\nLINKED LIST:\t");
	display();
	
	
	while(1){
		printf("\n\nDo you want to Delete? y/n? ");
		scanf(" %c", &choice);
		if(choice=='y' || choice=='Y'){
			printf("Enter where you want to delete:\n1. At the end\n2. At beggining\n3. At any position\n");
            scanf("%d", &choose);
            switch(choose){
            	case 1:
            		delete_end();
            		fflush(stdin);
			        break;
			        case 2:
			        	delete_beg();
			        	fflush(stdin);
			            break;
			            case 3:
			                delete_anypos();
			                fflush(stdin);
			            	break;
			            	default:
			            		break;
			}
		}
		else{
			break;
		}
	printf("\nNow, LINKED LIST:\t");
	display();
	}
	printf("\nNow, LINKED LIST:\t");
	display();
	
	return 0;
}
