#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(i=0; i<n/2; i++) {
		int t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
