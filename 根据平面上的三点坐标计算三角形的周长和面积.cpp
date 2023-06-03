#include <stdio.h>
#include <math.h>
int main(void){
	double L,A,p,a,b,c,x1,x2,x3,y1,y2,y3;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	
	a=sqrt(pow(y1-y2,2)+pow(x1-x2,2));
	b=sqrt(pow(y2-y3,2)+pow(x2-x3,2));
	c=sqrt(pow(y1-y3,2)+pow(x1-x3,2));
	
	if(a+b<=c||a+c<=b||b+c<=a)

	{
	printf("Impossible");
	}
	else
	{
		L=a+b+c;
		p=(a+b+c)/2;
		A=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("L=%.2lf, A=%.2lf",L,A);
	}
	return 0;
}
