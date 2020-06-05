#include "mergesort.h"
#include <malloc.h>

void 
merge(int data[], int l, int m, int u){
	int * tmp = malloc(sizeof(int) *(u-l+1)); 

	int i, j, k; 
	i = l; 
	j = m+1; 
	k = 0; 


	 while(i <= m && j <= u){
	 	if (data[i] < data[j]){
	 		tmp[k++] = data[i++]; 
	 	}else{
	 		tmp[k++] = data[j++]; 
	 	}
	 }

	while(i <= m){
		tmp[k++] = data[i++]; 
	}

	while (j <= u){
		tmp[k++] = data[j++]; 
	}

	for(k=l;k<=u;k++){
		data[k] = tmp[k-l]; 
	}

	free(tmp); 
}


void 
mergesort(int data[], int l, int u){
	if (l < u){
		int m = (l+u) / 2; 

		mergesort(data, l, m); 
		mergesort(data, m+1, u); 
		merge(data, l, m, u); 
	}
}