#include <stdio.h>
struct date{
	int year;       
	int month;
	int day;              
};
int main(void) {
	struct date a;
	int i,sum=0;
	scanf("%d %d %d",&a.year ,&a.month ,&a.day);
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<a.month-1;i++){
		sum=sum+b[i];
	}
	sum=sum+a.day;
	if(a.year%4==0&a.year%100!=0||a.year%400==0){
		sum++;
	}
	printf("ÊÇµÚ%dÌì",sum);	
	
	return 0;
}
