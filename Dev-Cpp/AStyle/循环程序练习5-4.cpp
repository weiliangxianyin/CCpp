#include <stdio.h>
int main(void) {
	double a=1,sum=0;
	int i;
	for(i=1; i<=1000; i++) {
		if(i%2==0) {
			sum+=a*1/(2*i-1);
		}
		a=-a;
	}
	printf("%lf",sum);
	return 0;
}
