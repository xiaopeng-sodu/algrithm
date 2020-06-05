#include "sort_list.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

struct list_node *
create_node(int data){

	struct list_node * n = ( struct list_node *)malloc(sizeof(*n)); 
	memset(n, 0, sizeof(struct list_node)); 

	n->data = data; 

	return n; 
}

void
link_node(list_node *pre, list_node *cur, list_node *next){
	if(pre){
		pre->next = cur; 
	}

	if (cur){
		cur->next = next; 
	}
}

void 
create_list(){
	list_node * n1 = create_node(1); 
	list_node * n2 = create_node(2); 
	list_node * n3 = create_node(3); 

	link_node(n1, n2, n3); 

	list_node * tmp = n1; 
	while(tmp){
	 	list_node* next = tmp->next; 
	 	printf("%d ", tmp->data); 
	 	tmp = next; 
	}
}