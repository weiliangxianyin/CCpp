#include <stdio.h>
#define MAXSIZE 100

typedef int ElemType;
typedef struct {
	int i, j;//非零元素的行、列，均以1为起点
	ElemType e;//非零元素值
} SPNode;
typedef struct {
	SPNode data[MAXSIZE+1];//data[0]未用
	int rn, cn, tn;
} SPMatrix;
void createSMatrix(SPMatrix &M);
void transSMtrix(SPMatrix M, SPMatrix &T);
void printSMatrix(SPMatrix M);
int main(void) {
	SPMatrix M,T;
	createSMatrix(M);
	transSMtrix(M,T);
	printSMatrix(T);
	return 0;
}

void createSMatrix(SPMatrix &M) {
	int i,m,n;
	ElemType e;
	scanf("%d%d%d",&M.rn,&M.cn,&M.tn);
	for(i=1; i<=M.tn; i++) {
		scanf("%d%d%d",&m,&n,&e);
		M.data[i].i=m;
		M.data[i].j=n;
		M.data[i].e=e;
	}
}
/*以下为你的代码*/
void transSMtrix(SPMatrix M, SPMatrix &T) {
	T.rn = M.cn;
	T.cn = M.rn;
	T.tn = M.tn;
	int q = 1;
	for (int col = 1; col <= M.cn; col++) {
		for (int p = 1; p <= M.tn; p++) {
			if (M.data[p].j == col) {
				T.data[q].i = M.data[p].j;
				T.data[q].j = M.data[p].i;
				T.data[q].e = M.data[p].e;
				q++;
			}
		}
	}
}

void printSMatrix(SPMatrix M) {
	int k = 1;

	for(int i = 1; i <= M.rn; i++) {
		for(int j = 1; j <= M.cn; j++) {
			if(M.data[k].i == i && M.data[k].j == j) {
				printf("%3d", M.data[k].e);
				k++;
			} else {
				printf("%3d", 0);
			}
		}
		printf("\n");
	}
}




