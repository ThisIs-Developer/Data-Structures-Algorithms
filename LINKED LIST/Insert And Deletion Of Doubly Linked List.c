//Insertion and Deletion of DOUBLY LINKED LIST(DLL)

#include<stdio.h>
#include<stdlib.h>

typedef struct st{
	struct st* lptr;
	int info;
	struct st* rptr;
}Node;

Node *start=NULL;
Node *last=NULL;

void add_end(int value){
	Node *newptr=NULL, *ptr=NULL;
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
	}
}

void add_beg(int value){
	Node *newptr;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->rptr=newptr->lptr=NULL;
	newptr->rptr=start;
	start->lptr=newptr;
	start=newptr;
}

void add_anypos(int value, int pos){
	int steps=1;
	Node *newptr, *ptr=start;
	newptr=(Node*)malloc(sizeof(Node));
	newptr->info=value;
	newptr->rptr=newptr->lptr=NULL;
	while(steps<pos-1){
		ptr=ptr->rptr;
		steps++;
	}
	newptr->lptr=ptr;
	newptr->rptr=ptr->rptr;
	ptr->rptr=newptr;
	(ptr->rptr)->lptr=newptr;
}

void display(){
	Node *ptr=NULL;
	ptr=start;
	printf("NULL<->");
	while(ptr){
		printf("%d<->", ptr->info);
		ptr=ptr->rptr;
	}
	printf("NULL\n");
}

void delete_end(){
	Node *ptr=start, *pptr=NULL;
	while(ptr->rptr!=NULL){
		pptr=ptr;
		ptr=ptr->rptr;
	}
    pptr->rptr=NULL;
    free(ptr);
    ptr=NULL;
}

void delete_anypos(){
    int steps=1, pos;
	Node *pptr=start, *nptr;
	printf("Enter position: ");
	scanf("%d", &pos);
	while(steps<pos-1){
		pptr=pptr->rptr;
		steps++;
	}
	nptr=pptr->rptr;
	pptr->rptr=nptr->rptr;
	(pptr->rptr)->lptr=nptr->lptr;
	free(nptr);	
	nptr=NULL;
}

void delete_beg(){
	Node *ptr=start;
	start=start->rptr;
	start->lptr=NULL;
	free(ptr);
	ptr=NULL;
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
