#include <stdio.h>

void big(int x, int y){
	if(x > y){
		printf("%d",x);
	}else{
		printf("%d",y);
	}
}

int main(){
	int m;
	int n;
	scanf("%d %d",&m,&n);
	big(m,n);
}


/*
2번째 방법

int big(int x, int y);

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",big(n,m));

}

int big(int x,int y){
	
}  
*/
