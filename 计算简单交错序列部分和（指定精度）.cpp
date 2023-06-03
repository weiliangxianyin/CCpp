#include <stdio.h>
#include <math.h>
int main(void){
	double eps,a=1,i,sum=0;
	
	scanf("%lf",&eps);
	for(i=1;a>eps;i++){
		a=1/(3*(i-1)+1);
		sum+=a*-1*pow(-1,i);
		
    }
	printf("sum=%lf",sum);
	
	return 0;
}
