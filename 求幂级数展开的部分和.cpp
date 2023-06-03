#include <stdio.h>
#include <math.h>
int j(int i);
int main(void) {
	double a=1,x,e=1,i=1;
	scanf("%lf",&x);
	for(; a>=0.00001; i++) {
		a=pow(x,i)/j(i);
		e+=a;
	}
	printf("%.4lf",e);
	return 0;
}
int j(int i) {
	int s=1;
	if(i==0)return 1;
	else {
		for(; i>0; i--) {
			s*=i;
		}
		return s;
	}
}
