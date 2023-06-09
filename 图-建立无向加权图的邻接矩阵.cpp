#include <stdio.h>

#define MAXVEX 100 // 最大顶点数由用户定义
#define INFINITY 65535  //表示无穷大

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
void CreateMGraph(MGraph &G) { // 建立无向加权图的邻接矩阵
	scanf("%d %d",&G.numNodes,&G.numEdges); // 读顶点个数，边的个数
	getchar();

	int i,j;
	for(i = 0; i <G.numNodes; i++) { // 输入顶点信息
		scanf("%c\n",&G.vexs[i]);
	}

	for(i = 0; i <G.numNodes; i++) { // 初始化
		for(j = 0; j <G.numNodes; j++)
			G.arc[i][j]=INFINITY;
	}

	for(i=0; i<G.numEdges; i++) {
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		G.arc[a][b]=G.arc[b][a]=c;
	}

}



