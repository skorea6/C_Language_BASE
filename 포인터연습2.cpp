/*
	N�� M���Է��ϸ� N��M�� ũ�� 2���� �迭�� �����Ҵ����� �����ϰ�
	
	���� ���ʴ�� �Է��ѵ� ���� ū �������� ���� ��ȣ�� ����ϼ���. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	int **A = (int**)malloc(sizeof(int) * n * m);
	
	int i,j;
	for(i=0;i<n;i++){
		A[i] = (int*)malloc(sizeof(int) * m);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	int B[n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			B[i]+= A[i][j]; 
		}
	}
	
	int max=0;
	int num=0;
	
	//���� ū ���� ��ȣ���
	for(i=0;i<n;i++){
		if(max < B[i]){
			max = B[i];
			num = i+1;
		}
	}
	
	printf("%d", num);
}
