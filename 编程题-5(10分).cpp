#include <stdio.h>
int main(void)
{
    int num;
    int a, b;
    int Sum_number(int x,int y);
    scanf("%d%d",&a,&b);
    num=Sum_number(a,b);
    printf("%d",num);
    return 0;
}
int Sum_number(int x,int y){
	if(x>y){
		int t;
		t=x;
		x=y;
		y=t;
	}
	int count=0;
	for(;x<=y;x++){
		int s=x;
		int sum=0;
		while(s>0){
			sum=sum+s%10;
			s=s/10;
		}
		if(sum==20)count++;
	}
	return count;
}
