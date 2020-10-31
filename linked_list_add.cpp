#include<stdio.h>
#include<stdlib.h>

typedef struct n{
	
	int x;
	n * next;
	
}node;

void bastir(node * r){
	
	while(r != NULL){
		
		printf("%d ", r->x);
		r = r -> next;
	}
	
}

int main(){
	
	node * root;
	root = (node *)malloc(sizeof(node));
	root -> x = 500;
	
	root -> next = NULL;
	
	node * iter;
	iter = root;
	
	int i=0;
	for(i=0; i<5; i++){
		
		iter -> next = (node *)malloc(sizeof(node));
		iter = iter -> next;
		iter -> x = i*10;
		iter -> next = NULL;
	}
	bastir(root);
	
	
	
}
