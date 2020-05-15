#include<stdio.h>
int i,visit[20],n,adj[20][20],s,topo_order[10];

void dfs(int x)
{
  int y;
  visit[x]=1;
  for(y=1;y<=n;y++)
  {
    if((adj[x][y]==1) && (visit[y]==0))
    {
      dfs(y);
    }
  }
  topo_order[i--]=x;
}

void main()
{
  int x,y;
  printf("Enter the number of vertices:\n");
  scanf("%d",&n);
  printf("Enter the adjacency matrix:\n");
  for(x=1;x<=n;x++)
  {
    for(y=1;y<=n;y++)
    {
      scanf("%d",&adj[x][y]);
    }
  }
  for(x=1;x<=n;x++)
  {
      visit[x]=0;
  }
  i=n;
  for(x=1;x<=n;x++)
  {
   if(visit[x]==0)
   {
      dfs(x);
   }
  }
  printf("\nTopological sorting is:\n");
  for(x=1;x<=n;x++)
  {
     printf("x%d ",topo_order[x]);
  }
}
