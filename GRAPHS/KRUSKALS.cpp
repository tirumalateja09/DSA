#include<stdio.h>
#define I 32767
#define V 7
#define e 9
/*------------------------------------------------------------------------------*/
int included[e]={0}; 
int s[V+1]={-1};  // "s" uses to find ,is tree  forming any cycle 
int t[2][V-1];   // "t" to store edges of MCST
/*------------------------------------------------------------------------------*/
void unions( int u,int v ){
	if(s[u] < s[v] ){
		s[u]=s[u]+s[v];
		s[v]=u;
	}
	else{
		s[v]=s[u]+s[v];
		s[u]=v;
	}
}
int find(int u){
	int x=u;
	int v=0;
    while ( s[x] > 0){
        x = s[x];
    }
    while( u!=x ){
    	v=s[u];
    	s[u]=x;
    	u=v;
	}
 
    return x;
}
void print_KruskalsMST(){
	int i;
	printf("\n----Edges of MCST using Kruskals Algorithm----\n");
	for( i=0;i<V-1;i++ ){
		printf("[%d,%d]\n",t[0][i],t[1][i]);
	
	}
}
/*------------------------------------------------------------------------------------*/
void KrushkalsMCST( int A[3][9]){
	int i=0,j,k,u,v,min;
	while( i< V-1 ){
		min=I;
		for( j=0;j<e;j++ ){
			if( included[j]==0 && A[2][j] < min ){
				min=A[2][j];
				k=j;
				u=A[0][j];
				v=A[1][j];
			}
		}
		if( find(u)!=find(v)){
			t[0][i]=u;
			t[1][i]=v;
			unions( find(u),find(v) );
			i++;
		}
		included[k]=1;
	}
	print_KruskalsMST();
}
int main(){
	int i,j;
	  int edges[3][9] = {
	                     { 1, 1,  2,  2, 3,  4,  4,  5,  5},
                         { 2, 6,  3,  7, 4,  5,  7,  6,  7},
                         {25, 5, 12, 10, 8, 16, 14, 20, 18}
						                                     };
	KrushkalsMCST(edges);
}