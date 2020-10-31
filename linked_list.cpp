#include<stdio.h>
#include<stdlib.h>

typedef struct n{
		
	int x;
	n * next;
	
}node;

int main(){
	
	node * root;
	root = (node *)malloc(sizeof(node));
	root -> x = 18;
	
	root -> next = (node *)malloc(sizeof(node));
	root -> next -> x = 34;
	
	root -> next -> next = (node *)malloc(sizeof(node));
	root -> next -> next -> x = 3418;
	
	node * iter;
	iter = root;
	
	printf("%d\n",iter -> x);
	iter = iter -> next;
	printf("%d\n",iter -> x);
	iter = iter -> next;
	printf("%d\n",iter -> x);
	
	
	
}
