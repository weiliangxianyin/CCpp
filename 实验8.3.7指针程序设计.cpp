#include <stdio.h>
#include <string.h>
void delchar(char a[],char c) {
	int i,j;
	for(i=0; i<strlen(a); i++) {
		if(*(a+i)!=c)printf("%c",*(a+i));
	}
}
int main(void) {
	char a[81],c;
	gets(a),scanf("%c",&c);
	delchar(&a[0],c);
	return 0;
}
