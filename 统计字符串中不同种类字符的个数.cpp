#include <stdio.h>
#define MAXS 15
void StringCount( char s[] );
void ReadString( char s[] );
int main() {
	char s[MAXS];

	ReadString(s);
	StringCount(s);

	return 0;
}
void ReadString( char s[] ) {
	gets(s);
}
void StringCount( char *s ) {
	int i,a[5]= {0};
	for(i=0; s[i]!='\0'; i++) {
		if (s[i] >='A'&&s[i] <='Z') {
			a[0]++;
		} else if (s[i] >= 'a'&&s[i] <= 'z') {
			a[0]++;
		} else if (s[i] == ' ') {
			a[1]++;
		} else if (s[i] >= '0'&&s[i] <= '9') {
			a[2]++;
		} else a[3]++;
	}
	printf ("letter = %d, blank = %d, digit = %d, other = %d",a[0],a[1],a[2],a[3]);
}
