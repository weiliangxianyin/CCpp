#include <stdio.h>
int main(void){
	int i,s,n;
	
	scanf("%d",&n);
	i=1;
	s=1;
	do{
		s=s*i;
        i++;
	}while(i<=n);
	printf("%d",s);
	
	return 0;
} 
