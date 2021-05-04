#include <stdio.h>

void holsu(int a, int b){
	if(a <= b){
		if(a%2==1){
			printf("%d ",a);
		}
		return holsu(a+1,b);
	}
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	holsu(a,b);
}
