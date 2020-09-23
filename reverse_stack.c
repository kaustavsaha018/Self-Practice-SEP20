//wap to reverse a stack using recursion

#include<stdio.h>
int top=-1;
int stack[10];
void push(int);
int pop();
void push_bottom(int);
void reverse();
void display();

void main(){
	push(1);
	push(2);
	push(3);	
	reverse();
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

void push_bottom(int element){
	int x;
	if(top==-1){
		push(element);
		return;
	}
	else{
		x=pop();
		push_bottom(element);
		push(x);
	}
}

void reverse(){
	int x;
	if(top==-1){
		return;
	}
	else{
		x=pop();
		reverse();
		push_bottom(x);
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
