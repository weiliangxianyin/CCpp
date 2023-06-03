#include <stdio.h>
int main(void){
	
	int a=0,y;
	int i=2001;
	scanf("%d",&y);
	if(2000<=y&&y<2100){
	
	for(i;i<=y;i++){
		
		if((i%4==0&&i%100!=0)||i%400==0){
		printf("%d\n",i);
		a=1;	
	   	}
	
	}
	
    }else{
    	printf("Invalid year!");
    	a=1;
	}
	
	if(a==0){
		printf("None");
	}
	
	return 0;
}
