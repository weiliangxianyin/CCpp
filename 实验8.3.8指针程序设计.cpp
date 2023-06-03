#include <stdio.h>
#include <string.h>
void delchar(char a[],int m) {
	int i,j;
	for(i=m-1; i<strlen(a); i++) {
		printf("%c",*(a+i));
	}
}
int main(void) {
	char a[81];
	int m;
	gets(a),scanf("%d",&m);
	delchar(&a[0],m);
	return 0;
}
