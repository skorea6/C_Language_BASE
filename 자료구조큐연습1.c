#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idx;

void pop(int *queue){
	//제일 위에 있는 카드를 바닥에 버린다
	int i;
	for(i=0;i<idx-1;i++){
		queue[i] = queue[i+1];
	}
	idx--;
}

void change(int *queue){
	//제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮	
	int i,k;
	k = queue[0];
	
	for(i=0;i<idx-1;i++){
		queue[i] = queue[i+1];
	}
	
	queue[idx-1] = k;
}

int main(){
	scanf("%d", &idx);
	
	int *queue = (int*)malloc(sizeof(int) * idx);
	
	int i;
	for(i=0;i<idx;i++){
		queue[i] = i+1;
	}
	
	while(idx > 1){
		pop(queue);
		change(queue);
	}
	
	printf("%d", queue[0]);
	
}
