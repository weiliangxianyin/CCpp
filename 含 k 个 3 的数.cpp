#include <stdio.h>
int main(void){
	int m,k,a=0;
	int i=1;
	scanf("%d%d",&m,&k);
    do{
    	    if(m/i%10==3){
            a++;
	        }
		i=i*10;		
	}while(i<=m);
	if(k==a){
		printf("YES");	
	}
	else{
		printf("NO");
	}

	return 0;
}
