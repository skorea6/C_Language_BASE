/*
	 ���� n�� m�� �Է����� �� 
	 
	 n�� m�� �ִ������� ����Լ��� ���Ͽ� ����ϼ���. 
*/
#include <stdio.h>
// 18 12
// 12   6
// 6 0
// 20 14
// 14 6
// 6 2
// 2 0
int maxgong(int n, int m){
	if(m==0){
		return n;	
	}else{
		return maxgong(m,n%m);
	}
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d", maxgong(n,m));
}
