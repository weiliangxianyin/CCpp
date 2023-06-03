#include <stdio.h> 
int factorsum( int number );
void PrintPN( int m, int n );
int main()
{
    int i, m, n;
    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);
    return 0;
}
int factorsum( int number ){
	if(number==1)
	return 1;
	int i,y,sum=0;
	for (i=1;i<number;i++)
	{
		if (number%i==0)
		{
			y=i;
			sum=sum+y;
		}	
	}
	if (sum==number)
	return sum;		
}
void PrintPN( int m, int n ){
	int i,j,t=0;
	for (i=m;i<=n;i++)
	{
		if (factorsum(i)==i)
		{
			t=1;
			printf ("%d = 1",i);
			for (j=2;j<i;j++)
			{
			 	if (i%j==0)
				printf (" + %d",j);
			}printf ("\n");
		}	
	}	
	if (t==0)
		printf ("No perfect number");		
}
