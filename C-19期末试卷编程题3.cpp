#include <stdio.h>
int reverse(int n);
int main() {
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    sum=reverse(n)+reverse(m);
    printf("sum=%d",reverse(sum));
    return 0;
}
int reverse(int n){
    int sum=0;
    while(n!=0){
        int t=n%10;
        sum=sum*10+t;
        n/=10;
		}
    return sum;
}
