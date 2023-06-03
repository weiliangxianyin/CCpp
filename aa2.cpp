#include <stdio.h>
int main(void) {
	int n,r,t;
	scanf("%d%d",&n,&r);
	if(n==1) {
		t=r*r*2;
	} else if(n==2) {
		t=r*r*r;
	} else if(n==3) {
		t=r*r*r+r*r+r;
	}
	printf("%d",t);
	return 0;
}
