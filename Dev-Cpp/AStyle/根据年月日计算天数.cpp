#include <stdio.h>
int main(void) {
	int a[12]= {31,28,31,30,31,30,31,31,30,31,30,31},
	           b[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
	int year,month,day;
	scanf("%d/%d/%d",&year,&month,&day);
	int sum=0;
	if(year%4==0&&year%100!=0||year%400==0) {
		int i;
		for(i=0; i<month-1; i++) {
			sum=sum+b[i];
		}
	} else {
		int i;
		for(i=0; i<month-1; i++) {
			sum=sum+a[i];
		}
	}
	sum=sum+day;
	printf("%d",sum);

	return 0;
}
