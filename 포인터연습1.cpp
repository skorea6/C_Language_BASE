/*
	N���Է��Ͽ� Nĭ ũ�� �迭�� �����Ҵ����� ������ ��
	�������ʴ�� �Է��Ͽ� �߰� ���� ����ϼ��� (�߰�ĭ�� ��) 
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
