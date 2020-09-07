#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *newnode, *temp;
void create();
void displayList();
void sortList();

int main(){
	
	create();
	printf("\n\nThe Entered Linked List is:");	
	displayList();
	
	printf("\n\nAfter sorting the List is: ");
	sortList();
	displayList();
	
	return 0;
}

void create(){
	head=NULL;
	char ch;
	do{
		newnode = (struct node *) malloc(sizeof(struct node));
		if(head==NULL){
			head=newnode;
			temp=newnode;
			printf("Enter the data: ");
			scanf("%d", &temp->data);
			temp->next=NULL;
		}
		else{
			temp->next=newnode;
			temp=newnode;
			printf("Enter the data: ");
			scanf("%d", &temp->data);
			temp->next=NULL;
		}
		printf("Do you enter more elements?(y/n): ");	
		scanf(" %c", &ch); 

	}while(ch=='y' && ch!='n');	
}

void displayList(){
	temp=head;
	while(temp!=NULL){
		printf(" %d ", temp->data);
		temp=temp->next;
	}
}

void sortList(){
    struct node  *index = NULL;
    temp=head;
    int tempo;
        
    if(head==NULL) {
        printf("\nEmpty List!");
		return;
    }
    else {
        while(temp!=NULL) {
    		index=temp->next;
            while(index!=NULL) {
                if(temp->data > index->data) {
                    tempo=temp->data;
                    temp->data=index->data;
                    index->data=tempo;
                }
                index=index->next;
            }
        	temp=temp->next;
        }    
    }
}
