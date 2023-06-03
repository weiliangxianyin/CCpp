#include <stdio.h>
int main(void){
	int y;
	scanf("%d",&y);
	int age;
	age=2019-y;
	if(age<18)printf("Invalid Value!");
	else if(18<=age&&age<=35)printf("Youth");
	else if(35<age&&age<50)printf("Middle-aged");
	else if(50<=age)printf("Old");
	return 0;
}
