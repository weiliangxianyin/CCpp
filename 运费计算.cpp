#include <stdio.h>
int main(void) {
	int p,s;
	float w;
	scanf("%d %f %d",&p,&w,&s);
	double f=0,d;
	if(s<250) {
		d=0;
	} else if(250<=s&&s<500) {
		d=0.05;
	} else if(500<=s&&s<1500) {
		d=0.08;
	} else if(1500<=s&&s<3000) {
		d=0.1;
	} else if(3000<=s) {
		d=0.15;
	}
	f=p*w*s*(1-d);
	printf("%.2lf",f);

	return 0;
}
