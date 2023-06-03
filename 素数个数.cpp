#include <stdio.h>
int main(void){
	int a,b,i;
	scanf("%d",&a);
	if(2<=a&&a<=50000)
  {
    for(i=2;i<=a;i++){
	if(i%1==0&&i%i==0){
		b++;
	}
	else{
		b=b;
	}	
	}
	
	printf("%d",b);
  }
  else 
  {
    return 0;	
  }
	return 0;
}
