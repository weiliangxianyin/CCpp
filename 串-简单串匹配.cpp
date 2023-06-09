#include <stdio.h>
#include <string.h>

int Index(char s[], char t[], int pos);/* 返回子串T在主串S中第pos个字符之后的位置。若不存在,则函数返回值为0。 */

int main(void) {
	char s[81],t[81];
	int i,pos;
	scanf("%s",s);
	scanf("%s",t);
	scanf("%d",&pos);
	i=Index(s,t,pos);
	printf("%d",i);
	return 0;
}
int Index(char s[], char t[], int pos) {
	int i,j;
	i=pos;
	j=0;
	while(i<=strlen(s)-1 && j<=strlen(t)-1) {
		if(s[i]==t[j]) {
			++i;
			++j;
		} else {
			i=(i-j)+1;
			j=0;// 注意本处代码的推导过程
		}
	}
	if(j==strlen(t)) {
		return i-strlen(t)+1;// 注意本处代码的推导过程
	} else {
		return 0;
	}
}
