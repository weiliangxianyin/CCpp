#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s ) {
	int i,j;
	i=m-1,j=0;
	while(t[i]!='\0') {
		s[j]=t[i];
		i++,j++;
	}
	s[j]='\0';
}
void ReadString( char s[] ) {
	gets(s);
}

int main() {
	char t[MAXN], s[MAXN];
	int m;

	scanf("%d\n", &m);
	ReadString(t);
	strmcpy( t, m, s );
	printf("%s\n", s);

	return 0;
}
