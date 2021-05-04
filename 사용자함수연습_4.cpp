#include <stdio.h>

int maxnum(int a,int b,int c);

int main(){
	int m,n,k;
	
	scanf("%d %d %d",&m,&n,&k);
	
	printf("%d", maxnum(m,n,k));
}

int maxnum(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}else if(b>c && b>a){
		return b;
	}else{
		return c;
	}
}
