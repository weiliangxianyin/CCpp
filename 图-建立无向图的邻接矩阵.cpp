#include <stdio.h>
#define MAXVEX 100 // 最大顶点数由用户定义

typedef char VertexType; // 顶点类型应由用户定义
typedef int EdgeType; // 边上的权值类型应由用户定义

typedef struct {
	VertexType vexs[MAXVEX];  //注意：本题使用0号单元
	EdgeType arc[MAXVEX][MAXVEX]; //注意：本题使用0号单元
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

void PrintMGraph(MGraph G) { // 打印图
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

void CreateMGraph(MGraph &G) { // 建立无向图的邻接矩阵
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
//首先从输入中读取顶点数和边数
//然后依次读入每个顶点的信息和每条边的信息
//并将相应的邻接矩阵元素置为1。

//本题中使用0号单元，因此所有顶点和边的下标都要减去1
//另外，顶点信息在输入时可能会被空格影响，需要在%c前面加一个空格来忽略空格。
