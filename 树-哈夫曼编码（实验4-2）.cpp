#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	double weight;             //频率值
	int parent,lchild,rchild;
} node,*Huffmantree;

typedef char** Huffmancode;//动态分配数组存储哈夫曼编码表

void select(Huffmantree T, int end, int &s1, int &s2);   //在哈夫曼树T的顺序存储结构中，在1-end位置之间，找到权值最小的位置s1，权值次小的位置s2
void Huffman(Huffmantree &T,int n);                      //由n个频率值构造哈夫曼树T ，T存储结构中的0号单元不使用
void HuffmanCoding(Huffmantree T,Huffmancode &HC,int n); //对n个频率值（对应的字符）进行编码，存储在哈夫曼编码表HC中，HC的0号单元不使用

int main() {
	int n,i;
	Huffmantree T;
	Huffmancode HC;
	scanf("%d",&n);
	Huffman(T,n);
	HuffmanCoding(T,HC,n);
	for(i=1; i<=n; i++)
		printf("%s\n",HC[i]);
	return 0;
}

void select(Huffmantree T, int end, int &s1, int &s2) {
	double min1=1.0, min2=1.0;//min1为最小值，min2为次小值。任何字符的频率均小于1.0，min1,min2初值设定为1.0
	int i ;
	for(i=1; i<=end; i++)
		if(T[i].weight<min1 && T[i].parent==0) {
			min2 = min1;
			min1 = T[i].weight;
			s2 = s1;
			s1 = i;
		} else if(T[i].weight<min2 && T[i].parent==0) {
			min2 = T[i].weight;
			s2 = i;
		}
}

/*仅提交以下代码*/
void Huffman(Huffmantree &T,int n) {
	int i,m;
	m=2*n-1;
	T=new node[m+1]; //0号单元不用
	for(i=1; i<=m; i++) {
		T[i].parent=T[i].lchild=T[i].rchild=0;
		T[i].weight=0;
	}
	for(i=1; i<=n; i++) {
		scanf("%lf",&T[i].weight);
	}

	for(i=n+1; i<=m; i++) {
		int s1,s2;
		select(T,i-1,s1,s2);
		T[i].weight = T[s1].weight + T[s2].weight;
		T[i].lchild = s1;
		T[i].rchild = s2;
		T[s1].parent = T[s2].parent = i;

	}

}

void HuffmanCoding(Huffmantree T,Huffmancode &HC,int n) {
	HC=new char*[n+1];
	//0号单元不用
	char *cd=new char[n];
	int i, c, p;
	for(int i=1; i<=n; i++) {//HC中
		int f;
		int child=i;
		f=T[i].parent;
		cd[n-1]='\0';
		int j=n-1;
		while(f!=0) {
			if (T[f].lchild == child) {
				cd[--j]='0';
			} else {
				cd[--j]='1';
			}
			child=f;
			f=T[f].parent;
		}
		HC[i] = new char[n];
		strcpy(HC[i], cd+j);
	}
}
//倒过来放
