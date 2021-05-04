/*
1. main 함수에 10칸짜리 배열 A,B를 동적할당으로 선언

2. A배열에 값을 입력하는 함수를 만듦

3. B배열에 A배열 값의 2배 값을 저장하는 함수를 만듦

4. B배열의 총합을 구해주는 함수를 만듦

5. main에서 A배열의 값, B배열의 값, B배열의 총합을 출력하세요 
*/

#include <stdio.h>
#include <stdlib.h>

int arr1(int *A){
	int i;
	for(i=0;i<10;i++){
		scanf("%d", &A[i]);
	}
}

int arr2(int *A, int *B){
	int i;
	for(i=0;i<10;i++){
		B[i] = A[i]*2;
	}
}

int arr3(int *B){
	int i;
	int sum=0;
	
	for(i=0;i<10;i++){
		sum += B[i];
	}
	
	printf("B배열의 총합: %d\n", sum);
}

int main(){
	int *A = (int*)malloc(sizeof(int) * 10);
	int *B = (int*)malloc(sizeof(int) * 10);
	
	arr1(A);
	arr2(A, B);
	arr3(B);
	
	int i;
	
	// A 배열 값 
	for(i=0;i<10;i++){
		printf("A[%d]: %d\n",i, A[i]);
	}
	
	// B 배열 값 
	for(i=0;i<10;i++){
		printf("B[%d]: %d\n",i, B[i]);
	}
	
	// B 배열의 총합
	int sum=0;
	for(i=0;i<10;i++){
		sum+= B[i];
	}
	
	printf("B배열의 총합: %d", sum);
} 

 
