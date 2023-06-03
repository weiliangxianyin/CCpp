#include <stdio.h>
int main(void){
	
	int a,b,c,d,e;
	scanf("%d",&a);
	switch(a/10){
		case 10: printf("A"); break;
		case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		default : printf("E"); break;

	}
	
	return 0;
}
