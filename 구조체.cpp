/*
	구조체
	
	여러가지 데이터 타입을 하나의 구조로 묶어서 사용하는 형태
	
	이름: struct
	
	구조정의를 하고, 구조체 변수를 만들어서 사용'
	
	구조 정의 방법
	
	struct 구조이름{
	
	};
	구조체를 이루는 요소
	
	구조체는 프로그램을 실행하기 전에 미리 구조가 정의되어 있어야 한다. 
*/ 

#include <stdio.h>
#include <string.h>

struct customer{
	char name[20];
	int age;
	char gender;
}; 

int main(){
	// 구조체 변수 선언
	// 구조체타입: struct 구조이름
	
	struct customer kim; // customer 구조타입의 kim 변수를 선언 
	strcpy(kim.name,"김길동"); // kim.name에 "김길동"
	kim.age =32;
	kim.gender = 'M';
	
	printf("이름: %s\n",kim.name); 
	printf("나이: %d\n",kim.age);
	printf("성별: %c\n",kim.gender);
}
