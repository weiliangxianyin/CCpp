#include <stdio.h>
#include <stdlib.h>

typedef int KeyType;
typedef struct ElemType {
	int key;
} ElemType;
typedef struct BiTNode {
	ElemType data;
	struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void InsertBST(BiTree &T,ElemType e);
BiTree search(BiTree T,int key);
void Inorder(BiTree T);

void create_bsttree(BiTree &bt) {
	int i,n;
	ElemType e;
	bt=NULL;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%d",&e.key);
		InsertBST(bt,e);
	}
}

void visit(ElemType e) {
	printf("%d ",e.key);
}

int main(void) {
	BiTree bt;
	create_bsttree(bt);
	int key;
	scanf("%d",&key);
	BiTree p=search(bt,key);
	if(p==NULL) printf("Not Found");
	else visit(p->data);
	printf("\n");
	Inorder(bt);
	return 0;
}
/*仅提交以下代码*/
void InsertBST(BiTree &T,ElemType e) {
	if(T==NULL) {
		T=new BiTNode;
		T->data=e;
		T->lchild=T->rchild=NULL;
	} else {
		if(T->data.key<e.key)
			InsertBST(T->rchild,e);
		else if(T->data.key>e.key)
			InsertBST(T->lchild,e);
	}
}

BiTree search(BiTree T,int key) {
	if(T==NULL||T->data.key==key) {
		return T;
	} else {
		if(T->data.key<key)
			return search(T->rchild,key);
		else if(T->data.key>key)
			return search(T->lchild,key);
	}
}

void Inorder(BiTree T) {
	if(T!=NULL) {
		Inorder(T->lchild);
		visit(T->data);
		Inorder(T->rchild);
	}
}
