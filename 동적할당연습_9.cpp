/*
5ĭ ũ���� �迭�� �����Ҵ����� ������ ��
���� ���ʴ�� �Է��Ͽ� �迭�� �����ϸ�

���� ū ���� ��ġ�� ������ִ� �Լ� 
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
