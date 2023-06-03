#include <stdio.h>
struct person {
	char name[10];       
	int age;              
};
int main(void) {
	struct person p1= {"jack",18},p2;
	p2=p1;
	if(*p1.name>='a' && *p1.name<='z')                                /*$ERROR$*/
		*p2.name=*p1.name-32;                                 /*$ERROR$*/
	p2.age=20;                                                   /*$ERROR$*/
	printf("p1.name=%s,p1.age=%d\n",p1.name,p1.age);
	printf("p2.name=%s,p2.age=%d\n",p2.name,p2.age);
	return 0;
}

