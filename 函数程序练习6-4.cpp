#include <stdio.h>
int main(void) {
	int i=1,s=0;
	for(; i<=100; i++) {
		s=s+i;
	}
	printf("sum=%d",s);
	return 0;
}
