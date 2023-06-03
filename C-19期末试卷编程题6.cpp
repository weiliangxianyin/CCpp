#include <stdio.h>
int main(void) {
	int classroom[2][3];
	int max=0,a=0,b=0;
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			scanf("%d",&classroom[i][j]);
			if(max<classroom[i][j]) {
				max=classroom[i][j];
				a=i+1,b=j+1;
			}
		}
	}
	printf("max=%d, floor=%d,no=%d.",max,a,b);
	return 0;
}
