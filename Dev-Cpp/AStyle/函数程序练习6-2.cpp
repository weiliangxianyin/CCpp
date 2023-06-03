#include <stdio.h>
int main(void) {
	void a(int n);
	int n;
	scanf("%d",&n);
	a(n);
	return 0;
}
void a(int n) {
	int i=1,a=1,b=1,c=1;
	for(; i<=n; i++) {
		if(i==1||i==2)printf("1");
		else {
			c=b;
			b=a+b;
			a=c;
			printf("%d",b);
		}
		if(i!=n)printf(",");
	}
}
