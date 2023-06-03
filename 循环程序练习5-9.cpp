#include <stdio.h>
int main(void) {
	int i,j,t;
	for(j=0; j<=196; j++) {
		for(t=0; t<=196; t++) {
			if(j+t==196&&2*j+4*t==772) {
				printf("chicken=%d,rabbit=%d",j,t);
			}
		}
	}
	return 0;
}
