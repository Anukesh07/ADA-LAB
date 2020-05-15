#include<stdio.h>
int visit[20],n,adj[20][20],s,count=0; 

void dfs(int x)
{
  int y;
  visit[x]=1;
  count++;
  for(y=1;y<=n;y++)
  {
    if((adj[x][y]==1) && (visit[y]==0))
    {
      dfs(y);
    }
  }
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
    dfs(1);
  if(count==n)
  {
   printf("\nThe graph is connected");
  }
  else
  {
   printf("\nThe graph is not connected");
  }
}
