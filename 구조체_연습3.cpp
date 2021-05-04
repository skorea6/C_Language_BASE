#include <stdio.h>

struct school{
	char name[20];
	int s1;
	int s2;
	int s3;
	int allscore;
};

int main(){
	int num;
	scanf("%d",&num);
	
	struct school sc[num];
	int i,j;
	for(i=0;i<num;i++){
		scanf("%s %d %d %d",&sc[i].name,&sc[i].s1,&sc[i].s2,&sc[i].s3);
		sc[i].allscore = sc[i].s1 + sc[i].s2 + sc[i].s3;
	}
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(sc[j].allscore < sc[j+1].allscore){
				struct school t1;
				t1 = sc[j];
				sc[j] = sc[j+1];
				sc[j+1] = t1;
			}
		}
	}
	
	for(i=0;i<num;i++){
		printf("%s %d %d %d %d\n",sc[i].name,sc[i].s1,sc[i].s2,sc[i].s3,sc[i].allscore); 
	}
	
	
} 
