#include <stdio.h>

int gasan(int a,char b,int c);

int main(){
	int a,c;
	char b;
	
	scanf("%d %c %d",&a,&b,&c);
	printf("%d %c %d = %d",a,b,c,gasan(a,b,c));
}

int gasan(int a,char b,int c){
	if(b=='+'){
		return a+c;
	}else if(b=='-'){
		return a-c;
	}else if(b=='*'){
		return a*c;
	}else if(b=='/'){
		return a/c;
	}else{
		return 0;
	}
}
