#include <stdio.h>
int n;
int cnt = 1;

int fi(int x, int y){
	if(cnt == n){
		return x;
	}
	else{
		cnt++;
		return fi(y ,x+y);
	}
}

int main(){
	scanf("%d",&n);
	printf("%d",fi(1,1));
}
