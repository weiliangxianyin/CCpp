#include <stdio.h>
int main(void){
	int i,a=0;
	while(i<100){
		i=a++;
	}
	printf("%d", i);
	return 0;
}
