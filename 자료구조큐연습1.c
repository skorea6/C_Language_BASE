#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idx;

void pop(int *queue){
	//���� ���� �ִ� ī�带 �ٴڿ� ������
	int i;
	for(i=0;i<idx-1;i++){
		queue[i] = queue[i+1];
	}
	idx--;
}

void change(int *queue){
	//���� ���� �ִ� ī�带 ���� �Ʒ��� �ִ� ī�� ������ ��	
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
