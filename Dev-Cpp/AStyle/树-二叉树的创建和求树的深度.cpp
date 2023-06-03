#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

void InitBiTree(BiTree &T);
void CreateBiTree(BiTree &T);
int BiTreeDepth (BiTree T);

int main(void) {
	BiTree T;
	InitBiTree(T);
	CreateBiTree(T);
	printf("%d",BiTreeDepth(T));
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
/*�������T�����*/
int BiTreeDepth(BiTree T) {
	if(!T)return 0;
	else {
		int left_depth=BiTreeDepth(T->lchid);
		int reft_depth=BiTreeDepth(T->rchid);
		return(left_depth>reft_depth?left_depth+1:reft_depth);
	}
