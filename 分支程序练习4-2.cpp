#include <stdio.h>
int main(void){
	
	int a,b,c,m1,m2,m;
	scanf("%d%d%d",&a,&b,&c);
	
	m1=a>b?a:b;
	m2=a>c?a:c;
	m=m1>m2?m1:m2;
	
	printf("%d",m);
	
	return 0;
}
