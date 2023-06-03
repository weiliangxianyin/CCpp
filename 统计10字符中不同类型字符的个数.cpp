#include <stdio.h>
int main(void){
	char a;
	int i,letter=0,blank=0,digit=0,other=0;
	
	for(i=1;i<=10;i++){
		a=getchar();
        if(65<=a&&a<=90||97<=a&&a<=122){
			letter++;
		}
		else if(a==32){
			blank++;
		}
		else if(48<=a&&a<=57){
			digit++;
		}
		else{
			other++;
		}
    }
	printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,digit,other);     
		
	return 0;
} 
