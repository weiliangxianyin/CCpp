#include <stdio.h>
int main(void) {
	int n,cou=0;
	scanf("%d",&n);
	int s=0,a[n],i=0;
	for(; i<n; i++) {
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	double ave=0;
	ave=1.0*s/n;
	i=0;
	for(; i<n; i++) {
		if(a[i]>ave)
			cou++;
	}
	printf("%d",cou);
	return 0;
}
