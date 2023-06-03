#include <stdio.h>
int main(void) {
	int n,i;
	double a,h=0,s=0;
	scanf("%lf %d",&h,&n);
	for(a=h,i=2; i<=n; i++) {
		h/=2;
		s+=2*h;
	}
	s+=a;
	h/=2;
	printf("%.1lf %.1lf",s,h);
	return 0;
}
