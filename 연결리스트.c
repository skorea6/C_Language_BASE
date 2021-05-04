/*
	N���Է��� �� 
	N���� ���� �̸��� �Է��ϰ�
	
	M�� �Է��ϸ� M��° ������ 
	��߿����� ����ϼ���.
	prev 
*/

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct List{
	char station[20];
	struct List *next;
	struct List *prev;
}List;

int main(){
	int n;
	scanf("%d", &n);
	
	List *Head = (List*)malloc(sizeof(List));
	List *Node = (List*)malloc(sizeof(List) * n);
	
	int i;
	for(i=0;i<n;i++){
		scanf("%s", &Node[i].station);
		
		Node[i].prev = &Node[i-1];
		Node[i].next = &Node[i+1];
	}
	
	Head->prev = NULL;
	Head->next = &Node[0];
	
	Node[0].prev = Head;
	//Node[n-1].next = NULL;
	
	List *Tail = (List*)malloc(sizeof(List));
	Node[n-1].next = Tail;
	Tail->prev = &Node[n-1];
	Tail->next = NULL;
	
	
	int m;
	scanf("%d", &m);
	
	List *p;
	p = &Node[m-1];
	
	while(p != Head){
		printf("%s\n", p->station);
		p = p->prev;
	}
	
} 
