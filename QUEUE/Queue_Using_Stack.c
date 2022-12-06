#include <stdio.h>
#include <stdlib.h>
#define N 20
int stack1[N], stack2[N];
int top1 = -1, top2 = -1;
int count = 0;


void push1(int value){
	if(top1==N-1){
		printf("Stack Overflow!!\n");
	}
	else{
		top1++;
		stack1[top1]=value;
	}
}

int pop1(){
	int item1;
	item1=stack1[top1];
	top1--;
	return item1;
}


void push2(int value){
	if(top2==N-1){
		printf("Stack Overflow!!\n");
	}
	else{
		top2++;
		stack2[top2]=value;
	}
}

int pop2(){
	int item2;
	item2=stack2[top2];
	top2--;
	return item2;
}

void enqueue(int value)
{
    push1(value);
    count++;
}

void dequeue()
{
    int i;
    for (i=0;i<=count;i++){
        push2(pop1());
    }
    pop2(); 
    count--;
    for (i=0;i<=count;i++)
    {
        push1(pop2());
    }
}

void display()
{
    int i;
    if(top1==-1 && top2==-1){
    	printf("Queue is Empty!!\n");
	}
	else{
	    for(i=0;i<=top1;i++){
            printf("%d  ",stack1[i]);
        }
        printf("\t\t");	
	}
}
 
int main()
{
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
 

