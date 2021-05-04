#include <stdio.h>

int factorial(int x){
	if(x==1){
		return x;
	}else{
		return x*factorial(x-1);
	}
	
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",factorial(n));
}
