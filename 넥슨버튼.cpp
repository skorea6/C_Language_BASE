/*
5 4

1 0
1 1
1 2
1 3
1 4
5 4
---
6 8

6 2
4 2
2 2
2 0
---
9 6

3 6
3 3
3 0
*/
#include <stdio.h>

int button(int n, int m){
	if(m==0){
		if(n==1){
			return 1;
		}else{
			return 2;
		}
	}else{
		return button(m,n%m);
	}
}

int main(){
	int n,m,k;
	scanf("%d %d",&n,&m);
	if(n == 0 || m == 0){
		printf("IMPOSSIBLE");
		return false;
	}
	k = button(n,m);
	
	if(k==1){
		printf("POSSIBLE");
	}else{
		printf("IMPOSSIBLE");
	}
}
