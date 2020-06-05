#include "bubsort.h"
#include "qsort.h"

void 
bubsort(int data[], int N){
	int i, j; 

	for(i=0;i<N;i++){
		for(j=N-1;j>=0;j--){
			if (j-1>=0 && data[j] < data[j-1]){
				swap(data, j, j-1); 
			}
		}
	}
}