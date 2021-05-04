/*
	메모리 최적화를 위해 sizeof()를 쓴다.
	sizeof() 메모리 크기를 반환해주는 함수
	
	sizeof(int) => 4
	
	(int)melloc(sizeof(int));
	포인터 : 다른 메모리의 주소값을 저장해두었다가
	그 주소의 값을 원격으로 다루는 함수
	 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p; 
	int n;
	// 포인터 p에 변수 n의 주소를 저장
	// 주소값 기호 : & 앰퍼센트
	p = &n;
	n = 500;
	
	printf("%d\n",&n);
	printf("%d\n",p);
	printf("%d\n",n); 
	printf("%d\n",*p);
	
	// 일반 변수에서 포인터를 사용할때 이름 앞에
	// *를 붙이면 포인터가 저장해 두었던,
	// 주소로 가서 그 실제값을 반영한다.
	
	*p = 15000;
	printf("%d\n",n);
}
