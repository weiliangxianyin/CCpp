#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	double weight;             //Ƶ��ֵ
	int parent,lchild,rchild;
} node,*Huffmantree;

typedef char** Huffmancode;//��̬��������洢�����������

void select(Huffmantree T, int end, int &s1, int &s2);   //�ڹ�������T��˳��洢�ṹ�У���1-endλ��֮�䣬�ҵ�Ȩֵ��С��λ��s1��Ȩֵ��С��λ��s2
void Huffman(Huffmantree &T,int n);                      //��n��Ƶ��ֵ�����������T ��T�洢�ṹ�е�0�ŵ�Ԫ��ʹ��
void HuffmanCoding(Huffmantree T,Huffmancode &HC,int n); //��n��Ƶ��ֵ����Ӧ���ַ������б��룬�洢�ڹ����������HC�У�HC��0�ŵ�Ԫ��ʹ��

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
	double min1=1.0, min2=1.0;//min1Ϊ��Сֵ��min2Ϊ��Сֵ���κ��ַ���Ƶ�ʾ�С��1.0��min1,min2��ֵ�趨Ϊ1.0
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

/*���ύ���´���*/
void Huffman(Huffmantree &T,int n) {
	int i,m;
	m=2*n-1;
	T=new node[m+1]; //0�ŵ�Ԫ����
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
	//0�ŵ�Ԫ����
	char *cd=new char[n];
	int i, c, p;
	for(int i=1; i<=n; i++) {//HC��
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
//��������
