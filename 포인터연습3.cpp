/*
1. main �Լ��� 10ĭ¥�� �迭 A,B�� �����Ҵ����� ����

2. A�迭�� ���� �Է��ϴ� �Լ��� ����

3. B�迭�� A�迭 ���� 2�� ���� �����ϴ� �Լ��� ����

4. B�迭�� ������ �����ִ� �Լ��� ����

5. main���� A�迭�� ��, B�迭�� ��, B�迭�� ������ ����ϼ��� 
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
	
	printf("B�迭�� ����: %d\n", sum);
}

int main(){
	int *A = (int*)malloc(sizeof(int) * 10);
	int *B = (int*)malloc(sizeof(int) * 10);
	
	arr1(A);
	arr2(A, B);
	arr3(B);
	
	int i;
	
	// A �迭 �� 
	for(i=0;i<10;i++){
		printf("A[%d]: %d\n",i, A[i]);
	}
	
	// B �迭 �� 
	for(i=0;i<10;i++){
		printf("B[%d]: %d\n",i, B[i]);
	}
	
	// B �迭�� ����
	int sum=0;
	for(i=0;i<10;i++){
		sum+= B[i];
	}
	
	printf("B�迭�� ����: %d", sum);
} 

 
