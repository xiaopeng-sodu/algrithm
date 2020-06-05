#ifndef sort_list_h
#define sort_list_h


typedef struct  list_node {
	struct list_node * next; 
	int data; 
}list_node;


void create_list(); 

#endif