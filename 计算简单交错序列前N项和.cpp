#include <stdio.h>
#include <math.h>
int main(void){
	int n;
	double a=0,i,sum=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=-1/(1+3*(i-1))*pow(-1,i);
		sum=sum+a;
	}
	printf("sum=%.3lf",sum);
	
	return 0;
}
