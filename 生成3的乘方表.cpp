#include <stdio.h>
#include <math.h>
int main(void) {
	int i,n;
	scanf("%d",&n);
	for(i=0; i<=n; i++) {
		int s=pow(3,i);
		printf("pow(3,%d)=%d\n",i,s);
	}
	return 0;
}
