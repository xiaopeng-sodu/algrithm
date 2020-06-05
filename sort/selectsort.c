#include "selectsort.h"
#include "qsort.h"

void
selectsort(int data[], int N){
	int i, j, tmp, m; 

	for(i=0;i<N;i++){
		tmp = data[i]; 
		m = i; 
		for(j=i+1;j<N;j++){
			if(data[j] < tmp){
				tmp = data[j]; 
				m = j;  
			}
		}

		swap(data, i, m); 
	}
}