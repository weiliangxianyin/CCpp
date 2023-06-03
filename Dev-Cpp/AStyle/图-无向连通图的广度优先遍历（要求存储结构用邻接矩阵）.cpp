#include <stdio.h>

#define MAXVEX 100 /* ��󶥵������û����� */

typedef char VertexType; /* ��������Ӧ���û�����  */
typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */

typedef struct {
	VertexType vexs[MAXVEX];
	EdgeType arc[MAXVEX][MAXVEX];
	int numNodes;
	int numEdges;
} AMGraph;

int visited[MAXVEX]; //����һ��ȫ�������ʾͼ�еĶ����Ƿ��Ѿ����ʹ���0�ŵ�Ԫ����ʾ��Ч����
void BFS(AMGraph G, int v);
void CreateGraph(AMGraph &G) {
	/*�ú���ƽ̨���ṩ*/
}

int main(void) {
	AMGraph G;
	scanf("%d %d",&G.numNodes,&G.numEdges);
	CreateGraph(G);
	BFS(G,1); // �ӱ��Ϊ1�Ķ��㿪ʼ���й����������
	return 0;
}
/*���ṩ���´���*/
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
