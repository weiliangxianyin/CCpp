#include <stdio.h>
int main(void) {
	char e;
	int x=0,y=0,z=0;
	scanf("%c",&e);
	while(e!='\n') {
		if('a'<=e&&e<='z') {
			x++;
		} else if('0'<=e&&e<='9') {
			y++;
		} else {
			z++;
		}
		scanf("%c",&e);
	}
	printf("小写字母%d个,数字%d个,其他字符%d个",x,y,z);

	return 0;
}
