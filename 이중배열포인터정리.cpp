/*
	이중 배열 포인터  
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int **A = (int**)malloc(sizeof(int) *3 * 5)
	// [60] bytes 
	
	
	// 행으로 쪼개기 [20], [20], [20]
	int i,j;
	for(i=0;i<3;i++){ // 메모리를 재할당 
		// 2중 포인터의 메모리 안에서 다시 나누는 것으로 1중 포인터로 나뉘어짐 
		A[i] = (int*)malloc(sizeof(int) *5);
	} 
	
	// 열로 쪼개면서 사용 
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &A[i][j]);
		}
	}
}
