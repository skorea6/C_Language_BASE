#include <stdio.h>
#include <stdlib.h>

int n;
int total=0;
int idx=0;
int max=0;

void push(int p, int *queue){
	queue[idx] = p;
	idx++;
}

void pop(int *queue){
	int i;
	for(i=n-2;i>=0;i--){
		if(queue[i] > max){
			max = queue[i];
			total++;
		}
	}
}

int main(){
	scanf("%d", &n);
	
	int *queue = (int*)malloc(sizeof(int) * n);
	
	int t;
	t = n;
	while(t > 0){
		int p;
		scanf("%d", &p);
		push(p, queue);
		t--;
	}
	max = queue[n-1];
	pop(queue);
	printf("%d", total+1);
}
