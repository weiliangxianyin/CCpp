#include <stdio.h>
#include <string.h>
int main(void) {
	char a[100];
	gets(a);
	int i=0,m=0,n=0,r=0;
	if(strlen(a)<=6) {
		printf("ERROR");
		return 0;
	}
	for(int i=0; a[i]!='\0'; i++) {
		if('A'<=a[i]&&a[i]<='Z') {
			m=1;
		} else if('a'<=a[i]&&a[i]<='z') {
			n=1;
		} else if('0'<=a[i]&&a[i]<='9') {
			r=1;
		}
	}
	if(m==1&&n==1&&r==1)printf("PASS");
	else printf("ERROR");
	return 0;
}
