#include <stdio.h>
int main(void){
	int a,sum=0;
	
	while(a>=0){
		scanf("%d",&a);
		if(a%2!=0&&a>=0){
			sum=sum+a;
			}
		}
	printf("%d",sum);
	
	return 0;
} 
