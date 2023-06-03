#include <stdio.h>
int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	int *p1=&a,*p2=&b,*p3=&c;
	if(a>b) {
		if(c>a)printf("%d %d %d",*p2,*p1,*p3);
		else if(c>b)printf("%d %d %d",*p2,*p3,*p1);
		else if(c<b)printf("%d %d %d",*p3,*p2,*p1);
	}

	else if(a<b) {
		if(c>b)printf("%d %d %d",*p1,*p2,*p3);
		else if(c<b) {
			if(c>a)printf("%d %d %d",*p1,*p3,*p2);
			else if(c<a)printf("%d %d %d",*p3,*p1,*p2);
		}
	}
	return 0;
}
