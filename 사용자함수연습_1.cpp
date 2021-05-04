#include <stdio.h>

void circle(int r){
	float a;
	a=r*r*3.14;
	printf("%.2f",a);
}

int main(){
	int r;
	scanf("%d",&r);
	circle(r);
}
