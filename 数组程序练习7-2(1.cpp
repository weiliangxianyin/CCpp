#include <stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	char a[n],t;
    for(i=0;i<n;i++){
        scanf("%c",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[j];
                a[j]=a[i];
                a[i]=t; 
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%c",a[i]);
    return 0;
} 
