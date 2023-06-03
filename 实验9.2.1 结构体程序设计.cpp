#include <stdio.h>
struct person {
	char name[10];
	char sex;
};
int fun(struct person *p) {
	int i,n=0;
	for(i=0; i<3; i++,p++)
		if(p->sex=='M')
			n++;

			return n;
}
int main(void) {
	struct person c[3];
	int i,n;
	for(i=0; i<3; i++) {
		scanf("%s",c[i].name);
		getchar();
		scanf("%c",&c[i].sex);
	}
	n=fun(c);
	printf("The number of men is %d",n);
	return 0;
}
