#include <stdio.h>
struct Sum {
	double x;
	double y;
} a[2];
int main(void) {
	scanf("%lf %lf %lf %lf",&a[0].x,&a[0].y,&a[1].x,&a[1].y);
	double m,n;
	m=a[0].x+a[1].x;
	n=a[0].y+a[1].y;
	printf("(%.1lf, %.1lf)",m,n);
	return 0;
}
