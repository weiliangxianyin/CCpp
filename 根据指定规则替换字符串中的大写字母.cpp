#include <stdio.h>
int main(void) {
	char a[81];
	gets(a);
	int i;
	for(i=0; a[i]!='\0'; i++) {
		if(65<=a[i]&&a[i]<=90)
			a[i]=155-a[i];
	}
	puts(a);
	return 0;
}
