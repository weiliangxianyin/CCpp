#include <stdio.h>
int main(void) {
	int a,b,c;
	for(a=0; a<=3; a++) {
		for(b=0; b<=3; b++) {
			for(c=0; c<=6; c++) {
				if(a+b+c==8) {
					printf("red=%d,yellow=%d,green=%d\n",a,b,c);
				}
			}
		}
	}
	return 0;
}
