#include "qsort.h"

void 
swap(int data[], int i, int j){
	int tmp = data[i]; 
	data[i] = data[j]; 
	data[j] = tmp;  
	
}

void
qsort(int data[], int l, int u){
	if(l >= u){
		return ; 
	}

	int i, m; 
	m = l; 
	for(i=l+1;i<=u;i++){
		if(data[i] < data[l]){
			swap(data, i, ++m); 
		}
	}

	swap(data, m, l); 

	if (l < m){
		qsort(data, l, m-1); 
	}

	if (m < u){
		qsort(data, m+1, u); 
	}
}