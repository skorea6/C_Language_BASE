/*
	N�� �Է������� Nĭ ũ���� 1���� �迭��
	�����Ҵ����� �����ϰ� ���� ���ʴ�� �Է��� ��
	������������ �����Ͽ� ����ϼ���. 
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
