#include <stdio.h>
int main(){
	int steak;
	scanf("%d", &steak);
	
	int m[steak];
	int n[steak];
	
	int min = 9999999;
	int i;
	for(i=0;i<steak;i++){
		scanf("%d",&m[i]);
	}
	for(i=0;i<steak;i++){
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<steak;i++){
		if(n[i]!=0 && m[i]/n[i] < min){
			min = m[i]/n[i];
		}
	}
	printf("%d", min);
}
