#include <stdio.h>
#include <string.h>
int main(void) {
	char a[80];
	gets(a);
	int i,len=strlen(a);
	for(i=0; i<len; i++) {
		if(65<=a[i]&&a[i]<=90)
			a[i]=155-a[i];
	}
	puts(a);
	return 0;
}
