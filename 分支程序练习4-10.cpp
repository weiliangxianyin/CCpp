#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("Three sides can not form a triangle.");
	} else{
		printf("Three sides can form a triangle.");
	}
	
	return 0;
}
