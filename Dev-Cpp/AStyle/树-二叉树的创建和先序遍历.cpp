#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
	char data;
	struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;

void InitBiTree(BiTree &T);
void CreateBiTree(BiTree &T);
void PreOrderTraverse(BiTree T);

int main(void) {
	BiTree T;
	InitBiTree(T);
	CreateBiTree(T);
	PreOrderTraverse (T);
	return 0;
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

/*先序递归遍历T */
void PreOrderTraverse(BiTree T) {
	if(T) {
		printf("%c",T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}
