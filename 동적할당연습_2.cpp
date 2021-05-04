#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	int *q;
	
	int m,n;
	p = &m;
	q = &n;
	
	scanf("%d %d",p,q);
	printf("%d + %d = %d\n",*p,*q,*p+*q);
	printf("%d - %d = %d\n",*p,*q,*p-*q);
	printf("%d * %d = %d\n",*p,*q,*p**q);
	printf("%d / %d = %d\n",*p,*q,*p/(*q));
}
