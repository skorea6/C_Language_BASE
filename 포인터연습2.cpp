/*
	N과 M을입력하면 N행M열 크기 2차원 배열을 동적할당으로 선언하고
	
	값을 차례대로 입력한뒤 가장 큰 합을가진 행의 번호를 출력하세요. 
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
	
	//가장 큰 행의 번호출력
	for(i=0;i<n;i++){
		if(max < B[i]){
			max = B[i];
			num = i+1;
		}
	}
	
	printf("%d", num);
}
