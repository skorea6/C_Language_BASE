/*
	자료구조 - 큐
	
	데이터가 들어간 순서대로 처리되는 구조
	
	queue
	
	queue
	
	4 1 2 3
	
	삭제를한다면?
	
	1 2 3
	
	큐에 값을 추가하는 것을 push
	큐의 값을 삭제하는 것을 pop
	
	
	10칸짜리 큐 배열을 선언하고
	
	큐에 값을 추가하는 함수 push
	큐의 값을 삭제하는 함수 pop을 정의하는데, 
	
	push : 정수 x를 입력한 뒤 큐에 x를 추가한다.
	pop : 큐의 첫번째 값을 삭제하고 앞으로 당긴다.
	
	0을 입력하기 전까지 push와 pop 입력을 반복하며
	
	큐배열 원소들을 출력하세요.
	 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idx = 0;	// 현재 큐 배열의 위치

void push(int *queue){
	int a;
	scanf("%d", &a);
	
	queue[idx] = a;
	idx++;
}

void pop(int *queue){
	int i;
	for(i=0;i<idx-1;i++){
		queue[i] = queue[i+1];
	}
	idx--;

}

int main(){
	int *queue = (int*)malloc(sizeof(int) * 10);
	
	char now[20];
	scanf("%s", &now);
	
	while(strcmp(now,"0")==1){
		
		if(strcmp(now,"push")==0){
			push(queue);
		}else if(strcmp(now,"pop")==0){
			pop(queue);
		}else{
			break;
			
		}
		int i;
		for(i=0;i<idx;i++){
			printf("%d ", queue[i]);
		}
		printf("\n");
		scanf("%s", &now);
	}
	
	printf("end");
}
