/*
	�̸� , ���� ��������� ���� person ������ �����ϰ� 
	
	N�� �Է����� �� N�� ���� �����͸� ���� 
	�Է��� �� ���ʴ�� ����ϼ���. 
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

