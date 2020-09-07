/*Given an unsorted dynamic array arr and two numbers x and y, find the minimum distance 
between x and y in arr. The array might also contain duplicates. You may assume that both 
x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int shortestDistance(int *arr,int size,int n1, int n2);
int main(){
	
	int *arr,n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	arr = (int *) calloc (n,sizeof(int));
	int i;
	printf("\nEnter the array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	
	int x,y;
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	printf("\nEnter the value of y: ");
	scanf("%d", &y);
	
	int sd = shortestDistance(arr,n,x,y);
	
	
	printf("\nThe minimum distance between %d and %d in arr is %d ",x,y,sd);
	getch();
	free(arr);
	return 0;
}

int shortestDistance(int *arr,int size,int n1,int n2){
	
	int i,j,k=size,diff;
	for(i=0;i<size;i++){
		if(*(arr+i)==n1){
			
			for(j=0;j<size;j++){
				if(*(arr+j)==n2){
					
					if(i-j<0)
						diff=(i-j)*(-1);
					else
						diff = i-j;
					if(diff<k){
						
						k=diff;
						
					}
								
				}
			}
		}	
	}
	
		
	return k;
}






