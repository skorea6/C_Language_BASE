#include <stdio.h>

/* 
1는 | 1개
2는 1+1 2 | 2개 
3는 1+1+1 , 2+1, 3, 1+2 | 4개
4는 7개
5는 13개
6는 24개
7는 44개 
*/

void plus123(int n){
	int pl[11];
	int i;
	pl[0] = pl[1] = 1;
	pl[2] = 2;
	pl[3] = 4;
	if(n < 4){
		printf("%d\n",pl[n]);
	}else{
		for(i=4;i<=n;i++){
			pl[i] = pl[i-3] + pl[i-2] + pl[i-1];
		}
		printf("%d\n",pl[n]);
	}
}

int main(){
	int i,n;
	scanf("%d",&n);
	int num[n]; 
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		plus123(num[i]);
	}
}
