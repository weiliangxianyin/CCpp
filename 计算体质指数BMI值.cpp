#include <stdio.h>
#include <math.h>
int main(void)
{
	float kg,m,a,BMI=0;
	scanf("%f%f",&kg,&m);
    a=m/100;
	BMI=(float) kg/pow(a,2);
	printf("%.2lf\n",BMI);
	return 0;
} 
