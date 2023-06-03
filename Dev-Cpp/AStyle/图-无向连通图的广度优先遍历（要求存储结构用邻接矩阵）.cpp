#include <stdio.h>

#define MAXVEX 100 /* 最大顶点数由用户定义 */

typedef char VertexType; /* 顶点类型应由用户定义  */
typedef int EdgeType; /* 边上的权值类型应由用户定义 */

typedef struct {
	VertexType vexs[MAXVEX];
	EdgeType arc[MAXVEX][MAXVEX];
	int numNodes;
	int numEdges;
} AMGraph;

int visited[MAXVEX]; //设置一个全局数组表示图中的顶点是否已经访问过，0号单元不表示有效数字
void BFS(AMGraph G, int v);
void CreateGraph(AMGraph &G) {
	/*该函数平台已提供*/
}

int main(void) {
	AMGraph G;
	scanf("%d %d",&G.numNodes,&G.numEdges);
	CreateGraph(G);
	BFS(G,1); // 从编号为1的顶点开始进行广度优先搜索
	return 0;
}
/*仅提供以下代码*/
void BFS(AMGraph G, int v) {
	int rear,front,q[MAXVEX];
	front=rear=0;
	printf("%d ",v);
	visited[v]=1;
	q[rear]=v;
	rear++;
	while(rear!=front) {
		int u=q[front];
		front++;
		for(int j=1; j<=G.numNodes; j++) {
			if(G.arc[u][j]==1&&visited[j]==0) {
				printf("%d ",j);
				visited[j]=1;
				q[rear]=j;
				rear++;
			}
		}
	}
}
