#include<stdio.h>
int main(void) {
	int a[3][3],i,j,row;   //ERROR

	for(i=0; i<3; i++)

		for(j=0; j<3; j++)

			scanf("%d",&a[i][j]);

	int min=a[0][0];

	for(i=0; i<3; i++)

		for(j=0; j<3; j++)

			if(a[i][j]<min)            //ERROR

			{

				min=a[i][j];

				row=i;

			}
	printf("%d,%d\n",min,row);
	return 0;
}
