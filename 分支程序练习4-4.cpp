#include <stdio.h>

int main(void){
	int a;
	scanf("%d",&a);
	
	if(a%3==0||a%5==0){
		printf("%d is a multiple of three or five.",a);
	} else{
		printf("%d is not a multiple of three or five.",a);
	}
	return 0;
}
