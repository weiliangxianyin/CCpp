#include <stdio.h>
int main(void) {
	int x,y;
	int *px,*py;
	px=&x;
	py=&y;
	scanf("%d %d",px,py);
	int t;
	t=*px;
	*px=*py;
	*py=t;
	printf("%d %d\n",*px,*py);
	return 0;
}
