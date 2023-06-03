#include <stdio.h>
#include <string.h>

void strInsert(char S[], char T[], int pos);

int main(void) {
	char s[81],t[81];
	int p;
	scanf("%s",s);

	scanf("%s",t);
	scanf("%d",&p);
	strInsert(s,t,p);
	printf("%s",s);
	return 0;
}

void strInsert(char s[], char t[], int pos) {
	char newstr[162];
	int lens=strlen(s);
	int lent=strlen(t);
	int i;
	for(i=0; i<pos-1; i++) {
		newstr[i]=s[i];
	}
	for(i=0; i<lent; i++) {
		newstr[pos-1+i]=t[i];
	}
	for(i=pos-1; i<lens; i++) {
		newstr[i+lent]=s[i];
	}
	strcpy(s,newstr);
	s[lens + lent] = '\0';
}
