#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct {
	int *R;
	int length;
} SSTable;

void init(SSTable &ST) {
	ST.R=(int *)malloc(MAXSIZE*sizeof(int));
	if(!ST.R) exit(0);
	ST.length=0;
}
void input(SSTable &ST,int n);
int Search_Bin(SSTable ST,int key);

int main(void) {
	SSTable st;
	int n,key,index;
	init(st);
	scanf("%d",&n);
	input(st,n);
	scanf("%d",&key);
	index=Search_Bin(st,key);
	printf("%d",index);
	return 0;
}
/*以下为你的代码*/
void input(SSTable &ST,int n) {
	for(int i=1; i<=n; i++) {
		scanf("%d",&ST.R[i]);
	}
	ST.length=n;
}
int Search_Bin(SSTable ST,int key) {
	int low=1,high=ST.length,mid;
	while(low<=high) {
		mid=(low+high)/2;
		if(ST.R[mid]==key) return mid;
		else if(ST.R[mid]>key) high=mid-1;
		else low=mid+1;
	}
	return 0;
}
