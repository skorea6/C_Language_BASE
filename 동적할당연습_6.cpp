/*
1���� �迭 �����Ҵ� 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *A = (int*)malloc(sizeof(int) * 5);
	// [[],[],[],[],[]]
	
	int i;
	for(i=0;i<5;i++){
		printf("%d",A[i]);
	}
} 
