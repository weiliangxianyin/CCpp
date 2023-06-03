#include <stdio.h>
#include <math.h>
int main(void) {
	int n,i=1;
	double s=0;
	scanf("%d",&n);
	for(; i<=n; i++) {
		s+=sqrt(i);
	}
	printf("sum=%.2lf",s);
	return 0;
}
