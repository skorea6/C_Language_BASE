#include <stdio.h>
#include <string.h>

struct school{
	char schoolname[20];
	int grade;
};

int main(){
	struct school sc;
	char sname[20];
	int sgrade;
	scanf("%s %d",&sname,&sgrade);
	
	strcpy(sc.schoolname,"Jejuelementary");
	sc.grade = 6;
	
	printf("%d grade in %s School",sc.grade,sc.schoolname);
	
	strcpy(sc.schoolname,sname);
	sc.grade = sgrade;
	printf("\n%d grade in %s School",sc.grade,sc.schoolname);
}
