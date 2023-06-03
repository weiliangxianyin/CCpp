#include <stdio.h>
int main(void){
	int n;
	double i,a,sum=0;
	
	scanf("%d",&n);
	for(i=1,a=1;i<=n;i++,a=a+2){
		sum=sum+1/a;
		}
	printf("sum=%lf",sum);
	
	return 0;
} 
