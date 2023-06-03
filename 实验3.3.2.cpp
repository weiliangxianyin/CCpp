#include <stdio.h>
#include <math.h>
int main(void){
	int a,b,c,p;
	double r,s;
	scanf("%d,%d,%d",&a,&b,&c);
	p=(a+b+c)/2;
	r=p*(p-a)*(p-b)*(p-c);
	s=sqrt(r);
	printf("%.3lf",s);
	return 0;
} 
