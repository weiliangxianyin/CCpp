#include <stdio.h>
struct time {
	int h;
	int m;
	int s;
} a;

int main(void) {
	int n;
	scanf("%d:%d:%d",&a.h,&a.m,&a.s);
	scanf("%d",&n);
	a.s=a.s+n;
	if(a.s>=60) {
		a.s=a.s-60;
		a.m++;
	}
	if(a.m>=60) {
		a.m=a.m-60;
		a.h++;
	}
	if(a.h>=24) {
		a.h=0;
	}
	printf("%02d:%02d:%02d",a.h,a.m,a.s);
	return 0;
}
