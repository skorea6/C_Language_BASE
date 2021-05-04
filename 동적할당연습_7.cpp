/*
	N을 입력했을때 N칸 크기의 1차원 배열을
	동적할당으로 선언하고 값을 차례대로 입력한 뒤
	내림차순으로 정렬하여 출력하세요. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int *A = (int*)malloc(sizeof(int) * n);
	
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(A[j] < A[j+1]){
				int t;
				t = A[j];
				A[j] = A[j+1];
				A[j+1] = t;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
} 
