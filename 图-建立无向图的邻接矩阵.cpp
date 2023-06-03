#include <stdio.h>
#define MAXVEX 100 // ��󶥵������û�����

typedef char VertexType; // ��������Ӧ���û�����
typedef int EdgeType; // ���ϵ�Ȩֵ����Ӧ���û�����

typedef struct {
	VertexType vexs[MAXVEX];  //ע�⣺����ʹ��0�ŵ�Ԫ
	EdgeType arc[MAXVEX][MAXVEX]; //ע�⣺����ʹ��0�ŵ�Ԫ
	int numNodes;
	int numEdges;
} MGraph;

void PrintMGraph(MGraph G);
void CreateMGraph(MGraph &G);
int main(void) {
	MGraph G;
	CreateMGraph(G);
	PrintMGraph(G);
	return 0;
}

void PrintMGraph(MGraph G) { // ��ӡͼ
	int i,j;
	for(i = 0; i <G.numNodes; i++) {
		printf("%c\n",G.vexs[i]);
	}
	for(i = 0; i <G.numNodes; i++) {
		for(j = 0; j <G.numNodes; j++)
			printf("%10d",G.arc[i][j]);
		printf("\n");
	}
}

void CreateMGraph(MGraph &G) { // ��������ͼ���ڽӾ���
	scanf("%d%d",&G.numNodes,&G.numEdges);
	getchar();
	for(int i=0;i<G.numNodes;i++)scanf("%c",&G.vexs[i]);
	int u,v=0;
	for(int i=0;i<G.numEdges;i++){
		scanf("%d%d",&u,&v);
		G.arc[u][v]=1;
		G.arc[v][u]=1;
	}	
}
//���ȴ������ж�ȡ�������ͱ���
//Ȼ�����ζ���ÿ���������Ϣ��ÿ���ߵ���Ϣ
//������Ӧ���ڽӾ���Ԫ����Ϊ1��

//������ʹ��0�ŵ�Ԫ��������ж���ͱߵ��±궼Ҫ��ȥ1
//���⣬������Ϣ������ʱ���ܻᱻ�ո�Ӱ�죬��Ҫ��%cǰ���һ���ո������Կո�
