#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n],i=0;
	for(; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(; n>0; n--) {
		printf("%d ",a[n-1]);
	}
	return 0;
}

