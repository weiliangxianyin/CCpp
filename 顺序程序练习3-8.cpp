#include <stdio.h>
int main(void){
	int a,b,h,c,j,s,y;
	scanf("%d%d",&a,&b);
	h=a+b;
	c=a-b;
	j=a*b;
	s=a/b;
	y=a%b;
	
	printf("sum = %d difference = %d, product = %d, quotient = %d, remainder =%d",h,c,j,s,y);
	return 0;
}
