#include <stdio.h>
#include <stdlib.h>

#define MAXVEX 30

int visited[MAXVEX]; // 定义一个全局数组，表示图中的顶点是否已经访问过，0表示没有访问，1表示已经访问

typedef char VertexType; // 顶点类型应由用户定义
typedef int EdgeType; // 边上的权值类型应由用户定义

typedef struct EdgeNode { // 边表结点
	int adjvex;    // 邻接点域,存储该顶点对应的下标
	EdgeType info;  // 用于存储权值,对于非加权图可以不需要
	struct EdgeNode *next; // 链域,指向下一个邻接点
} EdgeNode;

typedef struct VertexNode { // 顶点表结点
	VertexType data;  // 顶点域,存储顶点信息
	EdgeNode *firstEdge; // 边表头指针
} VertexNode;

typedef struct Graph {
	int numNodes, numEdges;
	VertexNode AdjList[MAXVEX];
} ALGraph;
void DFS(ALGraph G, int v);
void CreateGraph(ALGraph &G) {
	/*该函数平台已提供*/
}

int main(void) {
	ALGraph G ;
	scanf("%d %d", &G.numNodes, &G.numEdges);
	CreateGraph(G); //假设图中顶点从1开始编号，建立图的连接表
	DFS(G,1); //从编号为1的顶点开始深度优先搜索图
	return 0;
}
/*仅提交以下代码*/
void DFS(ALGraph G, int v) {
	printf("%d ",v);
	visited[v]=1;
	EdgeNode *p=G.AdjList[v].firstEdge;
	while(p!=NULL) {
		if(visited[p->adjvex]==0)
			DFS(G,p->adjvex);
		p=p->next;
	}

}
