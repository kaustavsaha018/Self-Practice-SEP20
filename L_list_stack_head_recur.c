//displaying the reverse of a stack implemented by linked list using head recursiive function

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*newnode,*head,*temp;

void push(int n);
void display(struct node *);

void main(){
	push(1);
	push(2);
	push(3);	
	display(head);
}

void push(int n){
	newnode=(struct node *)malloc(sizeof(struct node));
	if(head==NULL){
		head=newnode;
		temp=newnode;
		temp->data=n;
		temp->next=NULL;
	}
	else{
		temp->next=newnode;
		temp=newnode;
		temp->data=n;
		temp->next=NULL;
	}
}

//reversing using head recursion
void display(struct node *temp_head){
	if(temp_head==NULL){
		return;
	}
	else{
		display(temp_head->next); //head recursion call 
		printf(" %d", temp_head->data); //work is done after recursion
	}
}
