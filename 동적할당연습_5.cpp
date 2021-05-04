/*
	사용자 함수 포인터
*/

// n을 입력했을 때 1~n까지의 합 
#include <stdio.h>
#include <stdlib.h>

void sum(int *p){
	int i,k;
	k=0;
	for(i=1;i<=*p;i++){
		k=k+i;
	}
	printf("%d",k);
}

int main(){
	int n;
	scanf("%d",&n);
	sum(&n);
}
