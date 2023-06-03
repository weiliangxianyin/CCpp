#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

void InitBiTree(BiTree &T);
void CreateBiTree(BiTree &T);
void SwapBiTree(BiTree T);
void PreOrderTraverse(BiTree T);
void InOrderTraverse(BiTree T);
void PostOrderTraverse(BiTree T);

void visit(char e) {
	printf("%c",e);
}

int main(void) {
	BiTree T;
	InitBiTree(T);

	CreateBiTree(T);
	PreOrderTraverse(T);
	printf("\n");
	InOrderTraverse(T);
	printf("\n");
	PostOrderTraverse(T);
	printf("\n");

	SwapBiTree(T);
	PreOrderTraverse(T);
	printf("\n");
	InOrderTraverse(T);
	printf("\n");
	PostOrderTraverse(T);
	printf("\n");
	return 0;
}


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
/*交换二叉树T的左右子树*/
void SwapBiTree(BiTree T) {
	if(T!=NULL) {
		BiTree t;
		t=T->lchild;
		T->lchild=T->rchild;
		T->rchild=t;
		SwapBiTree(T->lchild);
		SwapBiTree(T->lchild);
	}
}

/*先序递归遍历T */
void PreOrderTraverse(BiTree T) {
	if(T!=NULL) {
		printf("%c",T->data);
		InOrderTraverse(T->lchild);
		InOrderTraverse(T->rchild);
	}
}

/*中序递归遍历T */
void InOrderTraverse(BiTree T) {
	if(T!=NULL) {
		InOrderTraverse(T->lchild);
		printf("%c",T->data);
		InOrderTraverse(T->rchild);
	}
}

/*后序递归遍历T */
void PostOrderTraverse(BiTree T) {
	if(T!=NULL) {
		InOrderTraverse(T->lchild);
		InOrderTraverse(T->rchild);
		printf("%c",T->data);
	}
}
