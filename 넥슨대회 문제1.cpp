/*
	입출력
	제어
	반복
	1차원배열
	최소,최대
	정렬
	이진탐색
	2차원배열
	문자열
	구조체 
	사용자함수
	재귀함수
	포인터 & 동적할당
	연결리스트
	 
*/

#include <stdio.h>
// 헤더파일 : 함수들을 정의해놓은 파일
 
// standard input output
//	표준	입력	출력
// 입력/출력 함수들을 정의하고 있다. 
 
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




