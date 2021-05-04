#include <stdio.h>

struct contest{
	int country;
	int snum;
	int score;
};

int main(){
	int num;
	scanf("%d",&num);
	
	struct contest ct[num];
	int i,j;
	int countrynum;
	for(i=0;i<num;i++){
		scanf("%d %d %d",&ct[i].country,&ct[i].snum,&ct[i].score);
		countrynum = ct[i].country;
	}
	
	int medal[countrynum];
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(ct[j].score < ct[j+1].score){
				struct contest t1;
				t1 = ct[j];
				ct[j] = ct[j+1];
				ct[j+1] = t1;
			}
		}
	}
	
	// medal ÃÊ±âÈ­
	for(i=0;i<countrynum;i++){
		medal[i] = 0; 
	}
	
	int setnum = 0;
	
	for(i=0;i<num;i++){
		//printf("country: %d, medal: %d \n", ct[i].country, medal[ct[i].country - 1]); 
		if(setnum == 3){
			break;
		}
		
		if(medal[ct[i].country-1] < 2){
			printf("%d %d\n",ct[i].country,ct[i].snum);
			medal[ct[i].country-1]++;
			setnum++;
		}
	}
}
