#include <stdio.h>
#include <string.h>
int main(void) {
	int n,i;
	scanf("%d\n",&n);
	char t[81],a[81];
	int len,max;
	for(i=0; i<n; i++) {
		gets(a);
		len=strlen(a);
		if(i==0) {
			max=len;
			strcpy(t,a);
		} else {
			if(max<len) {
				max=len;
				strcpy(t,a);
			}
		}
	}
	printf("The longest is: ");
	puts(t);
	return 0;
}
