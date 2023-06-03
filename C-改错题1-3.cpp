#include "stdio.h"
int main() {
	int a,b,t,*p1,*p2;
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;                      /*ERROR*/
	t=*p1;
	*p1=*p2;
	*p2=t;                /*ERROR*/
	printf("%d %d\n",*p1,*p2);           /*ERROR*/
	return 0;
}
