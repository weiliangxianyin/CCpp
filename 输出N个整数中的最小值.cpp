#include <stdio.h>
int main(void){
	int a,n,i,min;
	
	scanf("%d",&a);
    for(i=1;i<=a;i++){
    	scanf("%d",&n);
    	min=min<n?min:n;
    }
	printf("min=%d",min);
	
	return 0;
}
