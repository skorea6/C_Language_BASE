/*
	이름, 성별 , 나이를 멤버변수로 한
	구조를 하나 정의하여
	
	각각입력한 후 출력하세요.
	
	성별은 문자타입
	
	 
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

