#include <stdio.h>
#include <math.h>
int main(void) {
	char a[81];
	gets(a);
	int i,n,s=0;
	for(i=0; a[i]!='/0'; i++) {
		if(a[i]>='0'&&a[i]<='9') {
			s=s*16+a[i]-'0';
		} else if(a[i]>='a'&&a[i]<='f') {
			s=s*16+a[i]+10-'a';
		} else if(a[i]>='A'&&a[i]<='F') {
			s=s*16+a[i]+10-'A';
		}
	}
	printf("%d",s);
	return 0;
}
