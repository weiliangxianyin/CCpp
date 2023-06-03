#include<stdio.h>
int main(void){
	int x,a,b,c,sum=0;
	scanf("%d",&x);
	
	a=x/100;
	b=(x%100)/10;
	c=x%10;
	
	sum=a+b+c;
	
	printf("%d\n",sum);
	
	
	return 0;
}
