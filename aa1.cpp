#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	if(n%7!=0&&n%17!=0&&n%37!=0) {
		printf("NO");
	} else {
		printf("YES");
	}
	return 0;
}
