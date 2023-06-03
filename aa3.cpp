#include <stdio.h>
int main(void) {
	int s=0,a,n;
	scanf("%d",&n);
	while(n!=0) {
		a=n%10;
		n=n/10;
		s+=a;
	}
	printf("%d",s);
	return 0;
}
