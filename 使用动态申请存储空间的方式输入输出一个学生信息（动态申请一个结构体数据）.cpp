#include <stdio.h>
#include <stdlib.h>
struct student {
	int num;
	char name[20];
	int score;
};
int main(void) {
	struct student *pstu;
	pstu=(struct student*)malloc(sizeof(struct student)); 
	scanf("%d %s %d",&pstu->num,&pstu->name,&pstu->score);
	printf("%d %s %d\n",pstu->num,pstu->name,pstu->score);
	free(pstu);
	
	return 0;
}
