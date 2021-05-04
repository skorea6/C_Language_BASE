/*

1 2 3 4 5 6 7

1 2 4 5 6 7
1 2 4 5 6

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int k;
int idx;

// 밀기
void push(int *queue) {
	int a;
	a = queue[0];
	
	int i;
	for(i=0;i<idx-1;i++){
		queue[i] = queue[i+1];
	}
	queue[idx-1] = a;
	
}

// 삭제 
void pop(int *queue){
	int i;
	for(i=0;i<idx-1;i++){
		queue[i] = queue[i+1];
	}
	idx--;
}

int main(){
	scanf("%d %d", &idx, &k);
	
	int *queue = (int*)malloc(sizeof(int) * idx);
	
	int i;
	for(i=0;i<idx;i++){
		queue[i] = i+1;
	}
	
	while(idx > 0){
		for(i=0;i<k-1;i++){
			push(queue);
		}
		printf("%d, ", queue[0]);
		pop(queue);
	}
	
}
