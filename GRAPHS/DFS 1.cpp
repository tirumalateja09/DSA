#include<Stdio.h>
#include<Stdlib.h>
# define N 10
int A[10][10]={0};
int visited[N]={0};
void dfs( int u,int n){  
	int v;
	if( visited[u]==0){
		printf(" %d,",u);
		visited[u]=1;
		for( v=1;v<=n;v++){
			if( A[u][v]==1 && visited[v]==0){
				dfs(v,n);
			}
		}
	}
}
int main(){
	int i,j,n,u;
	printf("Enter the vertices of graph:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("(%d,%d)-",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("---->Adjacency matrix \n");
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf(" Enter the starting node to explore graph:");
	scanf("%d",&u);
	printf("--->dfs");
	dfs(u,n);
	
}