#include <stdio.h>
int main(void){
	int a,b,c,d,sum;
	scanf("%d",&a);
	b=a/100;
	c=a/10%10;
	d=a%10;
	sum=b+c+d;
	printf("%d",sum);
	
	
	return 0;
} 
