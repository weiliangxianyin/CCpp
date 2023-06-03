#include <stdio.h>
void a(int n) {
	if(n<2)
		printf("%d",n);
	else {
		a(n/2);
		printf("%d",n%2);
	}
}
int main(void) {
	int n;
	scanf("%d",&n);
	a(n);
	return 0;
}
