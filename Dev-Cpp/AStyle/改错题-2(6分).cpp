#include <stdio.h>
int main(void) {
	int i,j,s,n=0;

	for(i=0; i<1000; i++)

	{
		j=i;

		s=0;

		while(j==0) {  //ERROR

			s=s+j%10;    //ERROR

			j=j/10;

		}

		if(s==20)  n++;
	}
	printf("%d\n",n);

	return 0;
}
