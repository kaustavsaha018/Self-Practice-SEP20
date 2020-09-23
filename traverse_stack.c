//traversing a stack implemented by array using recursion
#include<stdio.h>

int top=-1;
int stack[10];
void push(int);
int pop();
void display();

void main(){
	push(1);
	push(2);
	push(3);	
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
