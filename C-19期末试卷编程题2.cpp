#include <stdio.h>
int main(void){
	double a,sum=0;
	scanf("%lf",&a);
	double t=2.0;
	int i=1;
	for(;1.0/t>=a;t=t+2){
		sum=sum+1.0/t*i;
		i=-1*i;
	}
	printf("sum=%.4lf",sum); 
	return 0;
}
