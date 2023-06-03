#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

void InitBiTree(BiTree &T);
void CreateBiTree(BiTree &T);
int CountBiTreLeaf (BiTree T);

int main(void) {
	BiTree T;
	InitBiTree(T);
	CreateBiTree(T);
	printf("%d",CountBiTreLeaf (T));
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

/*�������T��Ҷ�ӽ����*/
int CountBiTreLeaf (BiTree T) {
	if(!T)
		return NULL;
	else if(!T->lchild&&!T->rchild)
		return 1;
	else
		return CountBiTreLeaf (T->lchild)+CountBiTreLeaf (T->rchild);
}
