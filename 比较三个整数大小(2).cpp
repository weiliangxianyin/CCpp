#include <stdio.h>
int main(void){
	int a,b,c,t,x,y,z;

	scanf("%d%d%d",&a,&b,&c);
	
	x=a,y=b,z=c;
	a=a<b?a:b;
	a=a<c?a:c;
	c=c>b?c:b;
	c=c>x?c:x;
	b=x<y?x:y;
	t=y<z?y:z;
	b=x>t?x:t;
	
	printf("%d->%d->%d",a,b,c);
	
	return 0;
}
