/*
2진수 - 10진수


1001001
6543210

2^6 + 2^3 + 2^0
64 + 8 + 1

73
64
 
9

1001001

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char n[88];
	scanf("%s", &n);
	
	int x = 1;
	int t = 0;
	int i,j;
	// 1101 /   + 4 + 8
	for(i=strlen(n)-1;i>=0;i--){
		x=1;
		if(n[i]-48 == 1){
		printf("%d   w\n", i);
			for(j=1;j<=i;j++){
				x =   x *2;
			}
			t = t + x;
		} 
	}
	printf("%d", t);
}
