#include "heapsort.h"
#include "qsort.h"

#include <stdio.h>

void
adjustheap(int data[], int N){

	int i, l, u, max, idx; 

	for(i=N/2-1;i>=0;i--){
		l = 2*i+1; 
		u = 2*i+2; 

		max = data[i]; 
		idx = i; 

		if (data[l] && l <= N-1 && data[l] > max){
			max = data[l]; 
			idx = l; 
		}

		if (data[u] && u <= N-1 && data[u] > max){
			max = data[u]; 
			idx = u; 
		}

		swap(data, i, idx); 
	} 
}

void
heapsort(int data[], int N){

	int i; 

	for(i=N;i>=2;i--){
		adjustheap(data, i);  
		swap(data, i-1, 0); 
	}

}
