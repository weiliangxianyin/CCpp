#include <stdio.h>
int main(void) {
	int n,s=0,a[11],i=0;
	scanf("%d",&n);
	for(; i<n; i++) {
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	double ave=0;
	ave=1.0*s/n;
	printf("%.2lf",ave);

	return 0;
}
