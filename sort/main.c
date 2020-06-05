#include <stdio.h>
#include <string.h>

#include "qsort.h"
#include "insertsort.h"
#include "selectsort.h"
#include "bubsort.h"
#include "mergesort.h"
#include "heapsort.h"
#include "sort_list.h"
#include "shellsort.h"

#define N 11

void print_b(); 

int arr[N] = {3, 4, 8, 1, 2, 0, 10, 100, 44, 33, 11}; 

int 
main(int argc, char * argv[]){

	print_b(); 

	if (argc < 2){
		printf("please slect sort \n"); 
		return 1; 
	}

	if (strcmp(argv[1], "1") == 0) {
		printf("qsort\n"); 
		qsort(arr, 0, N-1); 
	}else if(strcmp(argv[1], "2") == 0){
		printf("insertsort\n"); 
		insertsort(arr, N); 
	}else if(strcmp(argv[1], "3") == 0){
		printf("selectsort\n"); 
		selectsort(arr, N); 
	}else if (strcmp(argv[1], "4") == 0){
		printf("bubsort\n"); 
		bubsort(arr, N); 
	}else if (strcmp(argv[1], "5") == 0) {
		printf("mergesort\n"); 
		mergesort(arr, 0, N-1); 
	}else if (strcmp(argv[1], "6") == 0){
		printf("heapsort\n");
		heapsort(arr, N); 
	}else if (strcmp(argv[1], "7") == 0){
		printf("shellsort\n"); 
		shellsort(arr, N); 
	}


	print_b(); 


	// create_list(); 

	return -1; 
}

void
print_b(){
	int i; 
	for(i=0;i<N;i++){
		printf("%d ", arr[i]); 
	}
	printf("\n"); 
}

