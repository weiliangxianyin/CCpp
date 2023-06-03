#include "stdio.h"
int main()
{
        int n,t;
        scanf("%d",&n);   
        while(n!=0)        
        {
                t=n%10;            /*ERROR*/
                if(t==3)  break;    
                n=n/10;
        }            
        if(n!=0)              /*ERROR*/
        {printf("Yes\n");}
        else
        {printf("No\n");}
    return 0;
}
