#include <stdio.h>
#include <string.h>
int main(void) {
	char a[81];
	gets(a);
	int i,n=strlen(a);
	for(i=0; i<n/2; i++) {
		if(*(a+i)!=*(a+n-1-i))break;
	}
	if(i==n/2)printf("YES");
	else printf("NO");
	return 0;
}
