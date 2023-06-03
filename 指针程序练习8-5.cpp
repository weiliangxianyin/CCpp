#include <stdio.h>
int strcmp(char *p1,char *p2) {
	if(*p1==*p2)return 0;
	else if(*p1>*p2)return 1;
	else return -1;
}
int main(void) {
	char a[81],b[81];
	gets(a),gets(b);
	int i;
	char *pa=a,*pb=b;
	for(i=0; *pa!='\0'; i++,pa++,pb++) {
		if(strcmp(pa,pb)!=0){
			printf("%d",*pa-*pb);
			break;
		}	
	}
	return 0;
}
