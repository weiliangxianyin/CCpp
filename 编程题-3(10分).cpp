#include <stdio.h>
int main(void) {
	double sum=0;
	int a=2,b=1;
	for(int i=0; i<100; i++) {
		sum=sum+1.0*a/b;
		double t=a;
		a=a+b;
		b=t;
	}
	printf("%.2lf",sum);
	return 0;
}
