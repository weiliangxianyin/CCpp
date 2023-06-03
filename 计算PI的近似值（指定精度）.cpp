#include <stdio.h>
#include <math.h>
int main(void){
	double eps,a,b=1,i,pi=0,sum=0;
	
    scanf("%lf",&eps);
	for(i=1,a=-1;b>=eps;i++){
		b=1/(a+2);
		sum+=-1*b*pow(-1,i);
		a+=2;
	
	}
	pi=4*sum;
	
	printf("%.2lf",pi);
	
	return 0;
}
