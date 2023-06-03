#include <stdio.h>
double com(int a,char ch,int b){
	if(ch=='+')a=a+b;
	else if(ch=='-')a=a-b;
	else if(ch=='*')a=a*b;
	else if(ch=='/')a=a/b;
	return a;
}
int main(void){
	int a,c,n=0;
	char b;
	scanf("%d%c",&a,&b);
	while(b!='='){
		scanf("%d",&c);
		if(b!='+'&&b!='-'&&b!='*'&&b!='/'){
		printf("ERROR");
		n=1;
		break;	
		}
		else if(b=='/'&&c==0){
			printf("ERROR");
			n=1;
			break;
		}
		a=com(a,b,c);
		scanf("%c",&b);
	} 
	if(n==0) printf("%d",a);
	return 0;
}
