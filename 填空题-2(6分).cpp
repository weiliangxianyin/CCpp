#include <stdio.h>
int main(void)

{

	int i,j;
	int s=0;

	for(i=0; i<=9; i++)

	{

		j=i*10+6;

		if(j%3==0)
			s=s+j;

	}

	printf("%d\n",s);

	return 0;

}
