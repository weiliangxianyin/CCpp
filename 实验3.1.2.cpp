#include <stdio.h>

int main(void)

{
    char ch1,ch2;
    scanf("%c%c",&ch1,&ch2);

    ch1=ch1-32;                  

    ch2=ch2-32;
 
	printf("%c%c",ch1,ch2);           

    return 0;

}
