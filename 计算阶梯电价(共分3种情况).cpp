#include <stdio.h>
int main(void){
	double a,b;
	scanf("%lf",&a);
	if(a<=50&&a>=0){
	b=a*0.53;
	printf("cost = %.2lf",b);}
	
	else if(a<0){
	printf("Invalid Value!");}
	
	else if(a>50){
	b=50*0.53+(a-50)*0.58;
	printf("cost = %.2lf",b);}
	
	return 0;
} 
