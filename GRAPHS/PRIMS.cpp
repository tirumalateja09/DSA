#include<stdio.h>
#include<stdlib.h>
# define I 32767            // Global declaration , need to update for every specific programme 
int cost [ ][8]={ 
                  { I,I,I,I,I,I,I,I},
                  { I,I,25,I,I,I,5,I},
				  { I,25,I,12,I,I,I,10},
				  { I,I,12,I,8,I,I,I},
				  { I,I,I,8,I,16,I,14},
				  { I,I,I,I,16,I,20,18},
				  { I,5,I,I,I,20,I,I},
				  { I,I,10,I,14,18,I,I} 
					                     };
int near[8]={I,I,I,I,I,I,I,I};   // no.of vertices 
int t[2][6];       // 2D matrix -> no.of edges , E=|v|-1 
/*-------------------------------------------Initial process ----------------------------------------------------------*/                
int main(){
	int i,j,k,u,v,n=7,min=I;
	for(i=1;i<=n;i++){         // find min edge from upper triangular adaj matrix 
		for(j=1;j<=n;j++){
			if( cost[i][j] < min){
				min=cost[i][j];
				u=i;
				v=j;
			}
		}
	}

	t[0][0]=u;                // entering  min edge in "t"  matrix 
	t[1][0]=v;                
	near[u]=0;
	near[v]=0;
	
	for(i=1;i<=n;i++){
		if( near[i]!=0 && cost[i][u] < cost[i][v] ){
			near[i]=u;
		}
		else{
			near[i]=v;
		}
	}
	/*----------------------------------------Repeating process---------------------------------------------------*/
   
   for(i=1;i<n-1;i++){    // "t" matrix , no.of edges as vertices = n-1
   	   for(j=1;j<=n;j++){
   	   	int min=I;
   	   	if( near[j]!=0 && cost[j][near[j]]<min ){
   	   		min=cost[j][near[j]];
   	   		k=j;
			  }
	    }
	  
   t[0][i]=k;
   t[1][i]=near[k];
   near[k]=0;
   
   for(j=1;j<=n;j++){
   	if(near[j]!=0 && cost[j][k] < cost[j][near[j]] ){
   		near[j]=k;
	   }
   }
}
/*---------------------------------------------------------------------------------------------------*/
   printf("\n------Edges of MCST using Prims Algorithm------\n");
   for( i=0;i<n-1;i++){       // print the "t" matrix gives the vertices of MST
     printf("(%d,%d)",t[0][i],t[1][i]);
     printf("\n");
   }	
}