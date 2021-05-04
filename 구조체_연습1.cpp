#include <stdio.h>
#include <string.h>

struct school{
	char name[20];
	char schoolname[20];
	int grade;
};

int main(){
	struct school sc;
	scanf("%s %s %d", &sc.name,&sc.schoolname,&sc.grade);

	printf("Name: %s\n",sc.name);
	printf("School: %s\n",sc.schoolname);
	printf("Grade: %d\n",sc.grade);
}
