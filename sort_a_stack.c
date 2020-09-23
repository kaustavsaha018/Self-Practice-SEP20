//sort a stack

//insert an element in a sorted stack (in a sorted manner)
#include<stdio.h>

int top=-1;
int stack[10];
void push(int);
int pop();
void insert_sort(int);
void stack_sort();
void display();

void main(){
	push(2);
	push(4);
	push(1);
	push(3);
	
	stack_sort();
	display();

}
void push(int n){
	if(top==10){
		printf("\nStack Overflow!");
		return;
	}
	else{
		top++;
		stack[top]=n;	
	}
}
int pop(){
	if(top==-1){
		printf("\nStack Underflow!");
		return;	
	}	
	else
		top--;
		return stack[top+1];		
}

void insert_sort(int element){
	int x;
	if(top==-1 || stack[top]<element){
		push(element);
		return;
	}
	else{
		x=pop();
		insert_sort(element);
		push(x);
	}
}

void stack_sort(){
	int x;
	if(top==-1){
		return;
	}
	else{
		x=pop();
		stack_sort();
		insert_sort(x);
	}
}

void display(){
	int x;
	if(top==-1){
		return;
	}	
	else{
		x=pop();
		display();
		printf(" %d", x);
		push(x);
	}
}
