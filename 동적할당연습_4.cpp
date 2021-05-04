/*
 int *B = (int*)malloc(sizeof(int));
 
 정수 3개를 동적할당으로 메모리를 생성한 뒤,
 입력하여 가장 큰 값을 출력하세요. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = (int*)malloc(sizeof(int));
	int *q = (int*)malloc(sizeof(int));
	int *r = (int*)malloc(sizeof(int));
	int m,n,s;
	
	p = &m;
	q = &n;
	r = &s;
	
	scanf("%d %d %d",p,q,r);
	
	if(*p > *q && *p > *r){
		printf("%d",*p);
	}else if(*q > *p && *q > *r){
		printf("%d",*q);
	}else{
		printf("%d",*r);
	}
}
