#include <stdio.h>
int main(){
	
	// 순차정렬
	
	// 5 1 4 2 3
	// 1 5 4 2 3 - 첫자리 구함
	// 1 5 4 2 3 
	// 1 4 5 2 3
	// 1 2 5 4 3 - 두번째 자리 구함
	// 1 2 4 5 3
	// 1 2 3 5 4 - 셋째자리
	// 1 2 3 4 5 - 넷째자리, 자동으로 맞춰진ㄷ. 
	
	
	5 1 4 2 3
	
	// 오름차순은 기준이 더 크면 교체
	 
	
	int i, j;
	
	int A[5] = {5,1,4,2,3};
	
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(A[i] > A[j]){
				int t;
				t  = A[i];
				A[i] = A[j];
				A[j] = t;
			} 
		}
	} 
	5 1 4 2 3
	1 5 4 2 3
	1 4 5 2 3 
	1 4 2 5 3
	1 4 2 3 5
	1 4 2 3 5
	1 2 4 3 5
	1 2 3 4 5
	
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(A[j] > A[j+1]){
				int t;
				t = A[j];
				A[j] = A[j+1];
				A[j+1] = t;
			}
		}
	}
	return 0;
}
