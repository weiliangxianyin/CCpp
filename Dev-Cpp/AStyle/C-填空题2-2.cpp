#include "stdio.h"
int main() {
	char str[100], *pc;
	int count=0;
	pc=str;
	gets(pc);
	while(*pc!='\0') {
		if(*pc==_______) {
			count++;
		}
		___________;
	}
	printf("The number of words is %d\n",count+1);
	return 0;
}
