//struct CHICKEN{
//	
//};
//
//struct CHICKEN menu[10];
//
//strcpy(menu[0].name,"�Ķ��̵�ġŲ");
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
	printf("���� ������ �ִ� �� �Է�: ");
	scanf("%d",&mymoney); 
	
	int smenu;
	printf("�޴� ���� �Է�: ");
	scanf("%d",&smenu);
	struct starbucks menu[smenu];
	
	printf("�޴��̸� | ������(t,m,s) | �絵 | ����ũ�ƿ�\n");
	int i;
	for(i=0;i<smenu;i++){
		scanf("%s %s %d %d",&menu[i].name,&menu[i].size,&menu[i].sweet,&menu[i].takeout);
	
	}
	
	//for(i=0;i<smenu;i++){
	//	printf("%s %s %d %d",menu[i].name,menu[i].size,menu[i].sweet,menu[i].takeout);
	//}
	
	
	int allprice = 0;
	printf("�޴��̸� | �ݾ� | ������(t,m,s) | �絵 | ����ũ�ƿ�\n");
	for(i=0;i<smenu;i++){
		printf("<�ֹ���ȣ #%d��>\n",i+1);
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
		
		printf("%s / %d��/ %s ������ / �絵 %d�ۼ�Ʈ / ����ũ�ƿ� ����%d \n",menu[i].name,menu[i].price,menu[i].size,menu[i].sweet,menu[i].takeout);
	}
	
	
	printf("�ֹ� �ݾ� �հ� : %d\n",allprice);
	
	if(mymoney >= allprice){
		printf("�ֹ���");
	}else{
		printf("�ֹ��ȵ�");
	}
	
}
