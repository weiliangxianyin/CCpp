#include <stdio.h>
int main(void) {
	int i,a,b,c,z=0;
	for(a=1; a<=100; a++) {
		for(b=1; b<=100; b++) {
			for(c=1; c<=100; c++) {
				if(a+b>=c&&b+c>=a&&a+c>=b) {
					if(a<b) {
						if(a*a+b*b==c*c) {
							z++;
						}
					}
				}
			}
		}

	}
	printf("符合条件的三角形个数有%d个",z);
	return 0;
}
