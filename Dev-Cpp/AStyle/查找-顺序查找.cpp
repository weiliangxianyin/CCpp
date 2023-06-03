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
int Search_Seq(SSTable ST,int key);

int main(void) {
	SSTable st;
	int n,key,index;
	init(st);
	scanf("%d",&n);
	input(st,n);
	scanf("%d",&key);
	index=Search_Seq(st,key);
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
int Search_Seq(SSTable ST,int key) {
	for(int i=1; i<=ST.length; i++) {
		if(ST.R[i]==key) return i;
	}
	return 0;
}
