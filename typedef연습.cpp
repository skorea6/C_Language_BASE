/*
	이름 , 나이 멤버변수를 가진 person 구조를 정의하고 
	
	N을 입력했을 때 N명 분의 데이터를 만들어서 
	입력한 후 차례대로 출력하세요. 
*/

#include <stdio.h>
typedef struct person{
	char name[20];
	int age;
}person;


int main(){
	int n;
	scanf("%d", &n);
	
	struct person p[n];
	
	int i;
	for(i=0;i<n;i++){
		scanf("%s %d", &p[i].name, &p[i].age);
	}
	
	for(i=0;i<n;i++){
		printf("%s %d\n", p[i].name, p[i].age);
	}
	
}

