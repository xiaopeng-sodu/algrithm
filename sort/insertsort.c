#include "insertsort.h"

void 
insertsort(int data[], int n){
	int i, j, tmp; 

	i = 0; 

	while(i <= n-1){
		tmp = data[i]; 
		j = i-1; 
		while(j >= 0 && data[j] > tmp){
			data[j+1] = data[j];
			j--; 
		}
		data[j+1] = tmp; 
		i++; 
	}
}