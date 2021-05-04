#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	int n;
	
	p = &n;
	scanf("%d",p);
	
	printf("%d...%d",*p/10,*p%10);
}
