/*
	����� �Լ� ������
*/

// n�� �Է����� �� 1~n������ �� 
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
