#include <stdio.h>
#include <math.h>
int main(void){
	
	int a,b,c,d;
	scanf("%d",&a);
	b=a/100;
	c=a/10%10;
	d=a%10;
	if(a==pow(b,3)+pow(c,3)+pow(d,3)){
	printf("1");	
	}
	else{
		printf("0");
	}
	
	return 0;
}
