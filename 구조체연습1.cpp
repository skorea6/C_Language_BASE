/*
	�̸�, ���� , ���̸� ��������� ��
	������ �ϳ� �����Ͽ�
	
	�����Է��� �� ����ϼ���.
	
	������ ����Ÿ��
	
	 
*/
#include <stdio.h>
typedef struct members{
	char name[20];
	char gender[20];
	int age;
};

int main(){
	struct members m1;
	scanf("%s %s %d",&m1.name,&m1.gender,&m1.age);
	
	printf("%s %s %d",m1.name,m1.gender,m1.age);
}

