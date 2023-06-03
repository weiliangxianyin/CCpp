#include "stdio.h"
int main()
{
        int n;
        scanf("%d",&n);
        if (n%2==0||n%3==0||n%5==0)
        printf("Yes\n");
        else
        printf("No\n");
        return 0;
}
