/*
	10진수를 입력하면 2진수로 출력 
	
	13
	2		1
	6		0
	3		1
	1

	1101	
	
*/


#include <stdio.h>
#include <stdlib.h>

int k=0;
int a[20];
int idx=0;

void jinsu(){
	//printf("%d ",a[idx]%2);
	a[idx] = k%2;
	k = k/2;
	idx++;
}

int main(){
	scanf("%d", &k);

	while(k!=0){
		jinsu();
	}
	
	int i;
	for(i=idx-1;i>=0;i--){
		printf("%d", a[i]);
	}
	
}
