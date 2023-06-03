#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status; /* Status是函数的类型,其值是函数结果状态代码，如OK等 */
Status visit(char e) {
	printf("%c ",e);
	return OK;
}
typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

void InitBiTree(BiTree &T);
void CreateBiTree(BiTree &T);
void InOrderTraverse(BiTree T);
void CopyBiTree(BiTree T,BiTree &T1);
void DestroyBiTree(BiTree &T);

int main(void) {
	BiTree T,T1;
	InitBiTree(T);
	InitBiTree(T1);
	CreateBiTree(T);
	CopyBiTree(T,T1);
	DestroyBiTree(T);
	InOrderTraverse(T1);
	return 0;
}

/* 销毁二叉树T */
void DestroyBiTree(BiTree &T) {
	if(T) {
		DestroyBiTree(T->lchild);
		DestroyBiTree(T->rchild);
		free(T);
	}
	T=NULL;
}

/*仅提交以下代码*/


/* 构造空二叉树T */
void InitBiTree(BiTree &T) {
	T=NULL;
}

/* 按先序输入二叉树中结点的值（一个字符） */
/* #表示空树，构造二叉链表表示二叉树T。 */
void CreateBiTree(BiTree &T) {
	char ch;
	scanf("%c",&ch);
	if(ch=='#')T=NULL;
	else {
		T=new BiTNode;
		T->data=ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}

/*中序递归遍历T */
void InOrderTraverse(BiTree T) {
	if(T) {
		InOrderTraverse(T->lchild);
		printf("%c",T->data);
		InOrderTraverse(T->rchild);
	}

}
/*将二叉树T复制给T1*/
void CopyBiTree(BiTree T,BiTree &T1) {
	if(T) {
		T1=new BiTNode;
		T1->data=T->data;
		CopyBiTree(T->lchild,T1->lchild);
		CopyBiTree(T->rchild,T1->rchild);
	}
	T1=NULL;
}
