#include <stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	double sum=0;
	int a=1,b=2,p=1;
	for(int i=0;i<n;i++){
		if(n==1)
			sum=1.0*b/a;
		else{
			sum=sum+1.0*b/a*p;
			int t=b;
			b=b+a;
			a=t;
			p=-p;
		}		 	
	}
	printf("sum=%.2lf",sum);
	return 0;
} 
