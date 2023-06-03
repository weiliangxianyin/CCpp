#include <stdio.h>
int main(void){
	int i;
	scanf("%d",&i);
	if(i%3==0){
		printf("%d is a multiple of three.",i);
	} else{
		printf("%d is not a multiple of three.",i);
	}
	
	return 0;
} 
