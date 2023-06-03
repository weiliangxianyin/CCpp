#include <stdio.h>
int main(void){
    
	double i=0,a,b,j=0,sum=0;
    scanf("%d",&a);
    while(i<=a){
    	scanf("%d",&b);
    	sum=sum+b;
    	i++;
	} 
	j=sum/a;
	printf("%.4lf",j);
	
	return 0;
}

