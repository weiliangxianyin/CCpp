#include <stdio.h>
int main(void) {
	char A,a;
	scanf("%c",&a);
	if('a'<=a&&a<='z')A=a-32;
	else A=a;
	printf("%c",A);
	return 0;
}
