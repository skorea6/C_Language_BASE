/*
	���� �迭 ������  
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int **A = (int**)malloc(sizeof(int) *3 * 5)
	// [60] bytes 
	
	
	// ������ �ɰ��� [20], [20], [20]
	int i,j;
	for(i=0;i<3;i++){ // �޸𸮸� ���Ҵ� 
		// 2�� �������� �޸� �ȿ��� �ٽ� ������ ������ 1�� �����ͷ� �������� 
		A[i] = (int*)malloc(sizeof(int) *5);
	} 
	
	// ���� �ɰ��鼭 ��� 
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &A[i][j]);
		}
	}
}
