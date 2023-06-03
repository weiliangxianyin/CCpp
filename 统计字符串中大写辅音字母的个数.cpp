#include <stdio.h>
int main(void) {
	char x[81];
	gets(x);
	int j,c=0;
	for(j=0; x[j]!='\0'; j++) {
		if('A'<=x[j]&&x[j]<='Z') {
			if(x[j]!='A'&&x[j]!='E'&&x[j]!='I'&&x[j]!='O'&&x[j]!='U')c++;
		}
	}
	printf("%d",c);
	return 0;
}
