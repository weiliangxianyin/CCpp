#include <stdio.h>
int main(void) {
	int n,b,s=0;
	scanf("%d",&n);
	while(n!=0) {
		b=n%10;
		s=s*10+b;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
