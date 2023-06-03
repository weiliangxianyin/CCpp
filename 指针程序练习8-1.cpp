#include <stdio.h>
int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int *p1=&a,*p2=&b,*p3=&c;
	if(a<b&&b<c)printf("%d %d %d",*p1,*p2,*p3);
	else if(a<c&&c<b)printf("%d %d %d",*p1,*p3,*p2);
	else if(b<a&&a<c)printf("%d %d %d",*p2,*p1,*p3);
	else if(b<c&&c<a)printf("%d %d %d",*p2,*p3,*p1);
	else if(c<a&&a<b)printf("%d %d %d",*p3,*p1,*p2);
	else if(c<b&&b<a)printf("%d %d %d",*p3,*p2,*p1);
	return 0;
}
