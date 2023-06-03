#include <stdio.h>
#include <math.h>
struct point {
	int x;       
	int y;              
};
int main(void) {
	struct point p1,p2;
	scanf("%d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y);
	double s;
	s=sqrt(1.0*(p2.y-p1.y)*(p2.y-p1.y)+(p2.x-p1.x)*(p2.x-p1.x));
	printf("两点之间的距离是%.3lf",s);	
	
	return 0;
}
