#include <stdio.h>

int out1(int a, int b);

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",out1(m,n));
}

int out1(int a, int b){
	int i,sum;
	sum = a;
	for(i=0;i<b-1;i++){
		sum=sum*a;
	}
	
	return sum;
}
