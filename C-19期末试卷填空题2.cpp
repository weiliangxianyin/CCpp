#include "stdio.h"
int main()
{
        char *pc="I like programming!",ch;
        int count=0;
        ch=getchar();
        while(*pc!='\0')
        {
                if(*pc==ch)
                {
                        count++; 
                }
                pc++;
        }
        printf("The number of the letter %c is %d\n",ch, count);
        return 0;
}
