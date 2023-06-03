#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status; /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
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

/* ���ٶ�����T */
void DestroyBiTree(BiTree &T) {
	if(T) {
		DestroyBiTree(T->lchild);
		DestroyBiTree(T->rchild);
		free(T);
	}
	T=NULL;
}

/*���ύ���´���*/


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

/*����ݹ����T */
void InOrderTraverse(BiTree T) {
	if(T) {
		InOrderTraverse(T->lchild);
		printf("%c",T->data);
		InOrderTraverse(T->rchild);
	}

}
/*��������T���Ƹ�T1*/
void CopyBiTree(BiTree T,BiTree &T1) {
	if(T) {
		T1=new BiTNode;
		T1->data=T->data;
		CopyBiTree(T->lchild,T1->lchild);
		CopyBiTree(T->rchild,T1->rchild);
	}
	T1=NULL;
}
