#include <stdio.h>
#include <math.h>
int main(void){
	int money,year=0;
	double rate,sum=0;
	
	scanf("%d%d%lf",&money,&year,&rate);
	sum=money*pow((1+rate),year);
	printf("%.2lf\n",sum);
	
    return 0;
	}
