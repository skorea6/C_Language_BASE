/*
	�����
	����
	�ݺ�
	1�����迭
	�ּ�,�ִ�
	����
	����Ž��
	2�����迭
	���ڿ�
	����ü 
	������Լ�
	����Լ�
	������ & �����Ҵ�
	���Ḯ��Ʈ
	 
*/

#include <stdio.h>
// ������� : �Լ����� �����س��� ����
 
// standard input output
//	ǥ��	�Է�	���
// �Է�/��� �Լ����� �����ϰ� �ִ�. 
 
typedef struct customer{
	
	char name[20];
	char school[20];
	int grade;
	
}customer;

int main(){
	customer a;
	
	scanf("%s %s %d", &a.name, &a.school, &a.grade);
	printf("Name: %s\n", a.name);
	printf("School: %s\n", a.school);
	printf("Grade: %d", a.grade);
	
	return 0;
}




