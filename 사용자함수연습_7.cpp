/*
	N�� �Է��Ͽ� �����ϸ�
	
	N�� N�� ũ���� �迭�� �����ϰ�, 
	
	���� 1���� �Ҵ��� ��
	
	���������� 90�� ȸ������ ����ϼ���.
	
	n�� 3�� ���
	 
	1 2 3
	4 5 6 
	7 8 9
	
	7 4 1
	8 5 2
	9 6 3
	
	
	
*/

#include <stdio.h>

void rotation(int n);

int main(){
	int n;
	scanf("%d",&n);
	rotation(n);
}

void rotation(int n){
	int i,j;
	int a1[n][n];
	int k = 1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a1[i][j] = k;
			k++;
		}
	}
	int b[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[j][n-i-1] = a1[i][j];
		}
		
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
