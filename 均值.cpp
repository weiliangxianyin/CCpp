#include <stdio.h>
int main(void){
	int a;
	double b,c,ave;
	scanf("%d",&a);
	scanf("%lf%lf",&b,&c);
	ave=(b+c)/a;
	printf("%.4lf",ave);
	
	return 0;
}
