/*
	 정수 n과 m을 입력했을 때 
	 
	 n과 m의 최대공약수를 재귀함수로 구하여 출력하세요. 
*/
#include <stdio.h>
// 18 12
// 12   6
// 6 0
// 20 14
// 14 6
// 6 2
// 2 0
int maxgong(int n, int m){
	if(m==0){
		return n;	
	}else{
		return maxgong(m,n%m);
	}
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d", maxgong(n,m));
}
