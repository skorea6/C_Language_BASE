/*
	정수 n과 k를 입력한 후 
	n행 n열 크기의 2차원배열을  동적할당으로 선언하고
	
	값을 차례대로 1~n*n만큼 할당하고 배열을 전달하면
	
	k번 만큼 오른쪽으로 90도 회전시켜서 나온
	
	결과를 출력하세요.  
	
	n= 3 k = 1
	1 2 3
	4 5 6
	7 8 9
	
	7 4 1
	8 5 2
	9 6 3
	
	9 8 7
	6 5 4
	3 2 1
	
*/
#include <stdio.h>
#include <stdlib.h>
int n,k;
int arr1(int **A){
	int i,j,p;
	int B[n][n];
	
	for(p=0;p<k;p++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			
				B[j][n-i-1] = A[i][j];
			
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				A[i][j] = B[i][j];
			}
		}
	}
	
	/*
	7 4 1
	8 5 2
	9 6 3
	*/
}

int main(){
	
	scanf("%d %d", &n, &k);
	
	int **A = (int**)malloc(sizeof(int) * n * n);
	int i,j;
	
	for(i=0;i<n;i++){
		A[i] = (int*)malloc(sizeof(int) * n);
	}
	
	int q=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			A[i][j] = q;
			q++;
		}
	}
	
	arr1(A);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d", A[i][j]);
		}
		printf("\n");
	}
}
