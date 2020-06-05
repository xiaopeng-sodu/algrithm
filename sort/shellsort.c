#include "shellsort.h"
#include "qsort.h"

void
shellsort(int data[], int N){
	int step; 

	for(step = N/2 ; step > 0 ; step /= 2){
		int i; 
		for(i=step;i<N;i++){
			if (data[i] < data[i-step]){
				swap(data, i, i-step); 
			}
		}
	}
}

