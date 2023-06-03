#include <stdio.h>

int main(void)

{

    char ch1,ch2;

    ch1=getchar();                   /*$ERROR$*/

    ch2=getchar();

    ch1=ch1-32;
    ch2=ch2-32;
    
    putchar(ch1);                /*$ERROR$*/
    putchar(ch2);            
 
    return 0;

}


