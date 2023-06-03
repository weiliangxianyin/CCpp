#include <stdio.h>
int main(void) {
	int i,n,s=1;
	scanf("%d",&n);
	for(i=1; i<=n-1; i++) {
		s=2*(s+1);
	}
	printf("%d\n",s);
	return 0;
}
