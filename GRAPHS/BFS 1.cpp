#include<stdio.h>
#include<stdlib.h>
# define N 20
/*------------------------------------------------------------------*/
int f=0;
int r=-1;
int q[N];
int visited[10]={0};
int graph[10][10]={0};
/*-------------------------------------------------------------------*/
void bfs(int n){  // number of vertices as parameter
	int i,j,u,v;
	printf("Enter first visited vertex:");
	scanf("%d",&i);
	visited[i]=1;     
	q[++r]=i;
	printf("------>bfs ");
	while(f<=r){
		u=q[f++];
		printf("%d,",u);
		for(v=1;v<=n;v++){
		    if( graph[u][v]==1 && !visited[v] ){	
				visited[v]=1;
				q[++r]=v;		
			}
		}
	}
	
}
int main(){
	int n,i,j;
	 printf("NUMBER OF VERTICES OF A GRAPH:");
     scanf("%d",&n);
     printf("   \nEnter the adjacency matrix\n");
     for(i=1;i<=n;i++){
     	for(j=1;j<=n;j++){
     		printf("(%d,%d)->",i,j);
     		scanf("%d",&graph[i][j]);
		 }         
	 }
	 printf(" --Adjacency matrix--\n");
	 for(i=0;i<=n;i++){
	 	for(j=0;j<=n;j++){
	 		printf("%d\t",graph[i][j]);
		 }
		 printf("\n");
	}
	bfs(n);
	 
     
}