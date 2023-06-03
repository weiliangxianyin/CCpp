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


/* ����ն�����T */
void InitBiTree(BiTree &T) {
	T=NULL;
}



/* ����������������н���ֵ��һ���ַ��� */
/* #��ʾ������������������ʾ������T�� */
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
/*����������T����������*/
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

/*����ݹ����T */
void PreOrderTraverse(BiTree T) {
	if(T!=NULL) {
		printf("%c",T->data);
		InOrderTraverse(T->lchild);
		InOrderTraverse(T->rchild);
	}
}

/*����ݹ����T */
void InOrderTraverse(BiTree T) {
	if(T!=NULL) {
		InOrderTraverse(T->lchild);
		printf("%c",T->data);
		InOrderTraverse(T->rchild);
	}
}

/*����ݹ����T */
void PostOrderTraverse(BiTree T) {
	if(T!=NULL) {
		InOrderTraverse(T->lchild);
		InOrderTraverse(T->rchild);
		printf("%c",T->data);
	}
}
