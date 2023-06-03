#include <stdio.h>
int main(void){
	char x[81],ch;
	scanf("%c\n",&ch);
	gets(x);
	int index,j;
	for(j=0;x[j]!='\0';j++){
		if(x[j]==ch)index=j;
	}
	printf("index=%d\n",j);
	return 0;
} 
