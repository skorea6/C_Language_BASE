/*
	N을입력하여 N칸 크기 배열을 동적할당으로 선언한 후
	값을차례대로 입력하여 중간 값을 출력하세요 (중간칸의 값) 
*/


#include <stdio.h>
#include <stdlib.h> 
int main(){
	int n;
	scanf("%d", &n);
	int *A = (int*)malloc(sizeof(int)*n);
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	
	printf("%d",A[n/2]);
} 
