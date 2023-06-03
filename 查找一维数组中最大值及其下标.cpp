#include <stdio.h>
int  b(int max[]);
int main(void){
	int n; 
	scanf("%d\n",&n);
	int max[n],i;
	for(i=0;i<6;i++){
		scanf("%d",&max[i]);
	}
	return 0;
} 
int b(int max[]){
	int i=0; 
	for(;i<6;i--){
	printf("%d ",max[i]);
	}

}
