#include <stdio.h>
#include <math.h>
int main(void){
	int money,year;
	double rate,sum;
	scanf("%d%d%lf",&money,&year,&rate);
	sum=money*pow((1+rate),year);
	printf("sum=%.2lf\n",sum);
	return 0;
}
