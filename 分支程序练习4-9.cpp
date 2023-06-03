#include <stdio.h>
int main(void){
	
	char a;
	scanf("%c",&a);
	if(48<=a&&a<=57){
	printf("%c is a digit.",a);	
	}else if(a>=65&&a<=90||a>=97&&a<=122){
	printf("%c is a letter.",a);	
	}else if(a==32){
	printf("%c is a space.",a);
	}else {
	printf("%c is not a digit or a letter or a space.",a);
	}
	
	return 0;
}
