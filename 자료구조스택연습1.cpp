// 스택 : 최근에 들어간 순서대로 

#include <stdio.h>
#include <stdlib.h> 

int idx=0;

void push(int t, int *queue){
	queue[idx] =  t;
	idx++;
}

void pop(int *queue){
	idx--; 
}



int main(){
	int k;
	scanf("%d", &k);
	
	int *queue = (int*)malloc(sizeof(int) * k);
	
	while(k > 0){
		int t;
		scanf("%d", &t);
		
		if(t != 0){
			push(t, queue);
		}else{
			pop(queue);
		}
		
		k--;
		
	}
	
	int i;
	int sum=0;
	for(i=0;i<idx;i++){
		sum += queue[i];
	}
	printf("%d", sum);
	
	
	 
}
