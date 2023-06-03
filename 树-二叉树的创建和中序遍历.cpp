7#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

void InitBiTree(BiTree &T);
void CreateBiTree(BiTree &T);
void InOrderTraverse(BiTree T);

int main(void) {
	BiTree T;
	InitBiTree(T);
	CreateBiTree(T);
	InOrderTraverse (T);
	return 0;
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
