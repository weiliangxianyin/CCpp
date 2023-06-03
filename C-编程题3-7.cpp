#include <stdio.h>
#include <string.h>
int main(void) {
	char a[100];
	gets(a);
	for(int i=0; a[i]!='\0'; i++) {
		if(a[i]=='a')a[i]='u';
	}
	char b[]="I love chuzhou university";
	if (strcmp(a,b) == 0) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	puts(a);
	return 0;
}
