#include <stdio.h>
int main(void) {
	int x=1;
	while(x) {
		if(x%5==1&&x%6==5&&x%7==4&&x%11==10) {
			printf("%d",x);
		}
		x++;
	}
	return 0;
}
