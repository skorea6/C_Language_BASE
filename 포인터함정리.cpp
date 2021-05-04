#include <stdio.h>

int arr(int *B){
	int i;
	for(i=0;i<5;i++){
		scanf("%d", &B[i]);
	}
}

int main(){
	int *A = (int*)malloc(sizeof(int) *5); // [1][2][3][4][5]
	arr(A);
	
	int i;
	for(i=0;i<5;i++){
		print("%d ", A[i]);
	}
} 
