/*
5칸 크기의 배열을 동적할당으로 선언한 뒤
값을 차례대로 입력하여 배열을 전달하면

가장 큰 값의 위치를 출력해주는 함수 
*/

#include <stdio.h>
#include <stdlib.h>

void big(int *B){
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&B[i]);
	}
}

int main(){
	int *A = (int*)malloc(sizeof(int)* 5);
	big(A);
	
	int i;
	int max;
	max = 0;
	int num;
	
	for(i=0;i<5;i++){
		if(max < A[i]){
			max = A[i];
			num = i+1;
		}
	}
	printf("%d",num);
}
