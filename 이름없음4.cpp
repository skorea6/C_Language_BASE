#include <stdio.h>
int main(){
	int hp,turn;
	scanf("%d %d",&hp, &turn);
	
	int maxhp = 0;
	int log=0;
	int i=0;
	
	for(i=0;i<turn;i++){
		int hplog; 
		scanf("%d %d",&log,&hplog);
		if(log == 1){
			hp = hp - hplog;
		}else if(log == 2){
			hp = hp + hplog;
		}else if(log == 3){
			hp = hp + hplog;
			maxhp = hp;
			break;
		}
	}
	
	printf("%d",maxhp);
}
