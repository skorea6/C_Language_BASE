//struct CHICKEN{
//	
//};
//
//struct CHICKEN menu[10];
//
//strcpy(menu[0].name,"후라이드치킨");
//menu[0].price = 15000;
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct starbucks{
	char name[20];
	char size[20];
	int sweet;
	int price;
	bool takeout;
};

int main(){
	
	int mymoney;
	printf("내가 가지고 있는 돈 입력: ");
	scanf("%d",&mymoney); 
	
	int smenu;
	printf("메뉴 개수 입력: ");
	scanf("%d",&smenu);
	struct starbucks menu[smenu];
	
	printf("메뉴이름 | 사이즈(t,m,s) | 당도 | 테이크아웃\n");
	int i;
	for(i=0;i<smenu;i++){
		scanf("%s %s %d %d",&menu[i].name,&menu[i].size,&menu[i].sweet,&menu[i].takeout);
	
	}
	
	//for(i=0;i<smenu;i++){
	//	printf("%s %s %d %d",menu[i].name,menu[i].size,menu[i].sweet,menu[i].takeout);
	//}
	
	
	int allprice = 0;
	printf("메뉴이름 | 금액 | 사이즈(t,m,s) | 당도 | 테이크아웃\n");
	for(i=0;i<smenu;i++){
		printf("<주문번호 #%d번>\n",i+1);
		if(strcmp(menu[i].name,"americano") == 0){
			if(strcmp(menu[i].size,"t") == 0){
				menu[i].price = 6000;
			}else if(strcmp(menu[i].size,"m") == 0){
				menu[i].price = 5700;
			}else if(strcmp(menu[i].size,"s") == 0){
				menu[i].price = 5400;
			}
		}
		else if(strcmp(menu[i].name,"icechoco") == 0){
			if(strcmp(menu[i].size,"t") == 0){
				menu[i].price = 5000;
			}else if(strcmp(menu[i].size,"m") == 0){
				menu[i].price = 4600;
			}else if(strcmp(menu[i].size,"s") == 0){
				menu[i].price = 4200;
			}
		}
		else if(strcmp(menu[i].name,"icemango") == 0){
			if(strcmp(menu[i].size,"t") == 0){
				menu[i].price = 5200;
			}else if(strcmp(menu[i].size,"m") == 0){
				menu[i].price = 4800;
			}else if(strcmp(menu[i].size,"s") == 0){
				menu[i].price = 4400;
			}
		}
		allprice = allprice + menu[i].price;
		
		printf("%s / %d원/ %s 사이즈 / 당도 %d퍼센트 / 테이크아웃 여부%d \n",menu[i].name,menu[i].price,menu[i].size,menu[i].sweet,menu[i].takeout);
	}
	
	
	printf("주문 금액 합계 : %d\n",allprice);
	
	if(mymoney >= allprice){
		printf("주문됨");
	}else{
		printf("주문안됨");
	}
	
}
