/*
	����ü
	
	�������� ������ Ÿ���� �ϳ��� ������ ��� ����ϴ� ����
	
	�̸�: struct
	
	�������Ǹ� �ϰ�, ����ü ������ ���� ���'
	
	���� ���� ���
	
	struct �����̸�{
	
	};
	����ü�� �̷�� ���
	
	����ü�� ���α׷��� �����ϱ� ���� �̸� ������ ���ǵǾ� �־�� �Ѵ�. 
*/ 

#include <stdio.h>
#include <string.h>

struct customer{
	char name[20];
	int age;
	char gender;
}; 

int main(){
	// ����ü ���� ����
	// ����üŸ��: struct �����̸�
	
	struct customer kim; // customer ����Ÿ���� kim ������ ���� 
	strcpy(kim.name,"��浿"); // kim.name�� "��浿"
	kim.age =32;
	kim.gender = 'M';
	
	printf("�̸�: %s\n",kim.name); 
	printf("����: %d\n",kim.age);
	printf("����: %c\n",kim.gender);
}
