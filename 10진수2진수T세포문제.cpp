#include <stdio.h>

int k;
int a[20];
int idx=0;

void jinsu(){
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
	int count=0;
	int b[20];
	for(i=idx-1;i>=0;i--){
		if(a[i] == 1){
			b[count] = i;
			count++;
		}
	}
	
	printf("%d \n",count);
	
	for(i=count-1;i>=0;i--){
		printf("%d ", b[i]);
	}
}
