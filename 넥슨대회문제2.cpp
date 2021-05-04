#include <stdio.h>
int main(){
	int a1=0;
	int a2=0;
	int sum=0;
	
	scanf("%d %d %d", &a1, &a2, &sum);
	
	int b1 = 0;
	int b2 = 0;
	
	while(sum % a2 != 0){
		sum = sum-a1;	
		b1++;
	}
	b2 = sum/a2;
	printf("%d %d",b1,b2);
}
