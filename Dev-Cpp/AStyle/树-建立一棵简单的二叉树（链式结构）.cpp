#include <stdio.h>
#include <stdlib.h>
typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

void InitBiTree(BiTree &T);
void CreateSimpleBiTree(BiTree &T);
void show(BiTree T) {
	printf("%c-%c-%c",T->data,T->lchild->data,T->rchild->data);
}
int main(void) {
	BiTree T;
	InitBiTree(T);
	CreateSimpleBiTree(T);
	show(T);
	return 0;
}
/*仅提交以下代码*/
void InitBiTree(BiTree &T) {
	T=new BiTNode;
	T->lchild=T->rchild=NULL;
}

void CreateSimpleBiTree(BiTree &T) {
	T->data=getchar();

	T->lchild=new BiTNode;
	T->lchild->data=getchar();
	T->lchild->lchild=T->lchild->rchild=NULL;

	T->rchild=new BiTNode;
	T->rchild->data=getchar();
	T->rchild->lchild=T->rchild->rchild=NULL;
}
