#include <stdio.h>
int main(void) {
	int a,b,c;
	for(a=1; a<=50; a++) {
		for(b=1; b<=50; b++) {
			for(c=2; c<=50; c+=2) {
				if(a*5+b*2+c/2==100) {
					printf("blue=%d,yellow=%d,red=%d\n",a,b,c);
				}
			}
		}
	}
	return 0;
}
