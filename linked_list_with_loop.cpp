#include<stdio.h>
#include<stdlib.h>

typedef struct n{
	
	int x;
	n * next;
	
}node;


int main(){
	
	node * root;
	root = (node *)malloc(sizeof(node));
	root -> x = 10;
	
	root -> next = (node *)malloc(sizeof(node));
	root -> next -> x = 20;
	
	root -> next -> next = (node *)malloc(sizeof(node));
	root -> next -> next -> x = 30;
	
	root -> next -> next -> next = NULL;   //Döngüde hata çikmamasi icin elle atama yapiyoruz.
	node * iter;
	iter = root;
	
	int i = 1;
	
	while(iter != NULL){
		
		printf("%d\n",iter -> x);
		iter = iter -> next;
		
	}
	
	
	
}
