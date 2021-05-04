#include <stdio.h>

void out1(int n){
	int i;
	for(i=0;i<n;i++){
		printf("~!@#$^&*()_+|\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	out1(n);
}
