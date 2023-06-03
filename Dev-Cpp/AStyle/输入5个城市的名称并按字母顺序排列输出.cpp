#include <stdio.h>
#include <string.h>
int main(void) {
	char  st[ 20 ],cs[ 5 ][ 20 ];
	int  i,j,p;
	printf( " input country's name:\n " );
	for (i = 0 ; i < 5 ; i ++ )
		gets(cs[i]);
	printf( " \n " );
	for (i = 0 ; i < 5 ; i ++ ) {
		p = i;
		strcpy(st,cs[i]);
		for (j = i + 1 ; j < 5 ; j ++ )
			if (strcmp(cs[j],st) < 0 ) p = j;
		if (p != i) {
			strcpy(st,cs[i]);
			strcpy(cs[i],cs[p]);
			strcpy(cs[p],st);
		}
		puts(cs[i]);
	}
	printf( " \n " );
	getch();
}
