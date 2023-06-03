#include <stdio.h>
int main(void){
	double a,b,c;
	char ch1;
	scanf("%lf%c%lf",&a,&ch1,&b);
	
	if(ch1=='+'){
		c=a+b;
		printf("%.2lf",c);}
	else if(ch1=='-'){
		c=a-b;
		printf("%.2lf",c);}
	else if(ch1=='*'){
		c=a*b;
		printf("%.2lf",c);}		
	else if(ch1=='/'){
		c=a/b;
		printf("%.2lf",c);}		
    else {
	    printf("Unknown operator");}
	return 0;
}

