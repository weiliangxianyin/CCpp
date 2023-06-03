#include <stdio.h>
int main(void){
	int i,t,w,h,n;
	scanf("%d\n",&t);
	for(i=1;i<=t;i++){
		scanf("%d %d %d\n",&w,&h,&n);
		int a=1;
		while(i!=0){
		if(w%2==0){
			w=w/2*h;
			a=a*2;
		}
		if(h%2==0){
			w=w*h/2;
			a=a*2;
			}
		if(w%2!=0&&h%2!=0){
			break;
		}
		}
		if(a>=n){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}
	return 0;
}
