#include <stdio.h>
#include <string.h>

void strDelete(char s[], int start, int end);

int main(void) {
	char s[81];
	int start,end;
	scanf("%s",s);
	scanf("%d %d",&start,&end);
	strDelete(s,start,end);
	printf("%s",s);
	return 0;
}

void strDelete(char s[], int start, int end) {
	int i,j;
	i=start-1;
	j=end;
	while(s[j]!='\0') {
		s[i]=s[j];
		++i;
		++j;
	}
	s[i]='\0';
}

