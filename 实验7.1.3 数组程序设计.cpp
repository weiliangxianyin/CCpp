#include <stdio.h>
int main(void) {
	char a[6]="ABCDE",temp;
	int i,j,k;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%c",a[j]);
		}
		printf("\n");
		temp=a[0];
		for(k=0; k<4; k++) {
			a[k]=a[k+1];
		}
		a[4]=temp;
	}
	return 0;
}
