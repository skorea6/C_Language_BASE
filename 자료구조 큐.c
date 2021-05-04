/*
	�ڷᱸ�� - ť
	
	�����Ͱ� �� ������� ó���Ǵ� ����
	
	queue
	
	queue
	
	4 1 2 3
	
	�������Ѵٸ�?
	
	1 2 3
	
	ť�� ���� �߰��ϴ� ���� push
	ť�� ���� �����ϴ� ���� pop
	
	
	10ĭ¥�� ť �迭�� �����ϰ�
	
	ť�� ���� �߰��ϴ� �Լ� push
	ť�� ���� �����ϴ� �Լ� pop�� �����ϴµ�, 
	
	push : ���� x�� �Է��� �� ť�� x�� �߰��Ѵ�.
	pop : ť�� ù��° ���� �����ϰ� ������ ����.
	
	0�� �Է��ϱ� ������ push�� pop �Է��� �ݺ��ϸ�
	
	ť�迭 ���ҵ��� ����ϼ���.
	 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idx = 0;	// ���� ť �迭�� ��ġ

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
