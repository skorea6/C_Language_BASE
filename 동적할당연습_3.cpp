#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p,*q,*r;
	int m,n,s;
	p = &m;
	q = &n;
	r = &s;
	
	scanf("%d %d",p,q);
	if(*p < *q){
		*r = *q - *p;
	}else{
		*r = *p - *q;
	}
	printf("%d",*r);
}
