#include<stdio.h>
#define size 20
#define true 1
#define false 0
int queue[size],visit[20],r=-1,f=0;
int n,s,adj[20][20],flag=0;
void insq(int x)
{
    queue[++r]=x;
}

int delq()
{
    return(queue[f++]);
}

int qemp()
{
    if(r<f)
    return 1;
    else
    return 0;
}

void bfs(int x)
{
  int y;
  visit[x]=1;
  insq(x);
  while(!qemp())
  {
    x=delq();
    for(y=1;y<=n;y++)
     {
       if((adj[x][y]==1) && (visit[y]==0))
       {
              visit[y]=1;
              flag=1;
              printf("x%d\t",y);
              insq(y);
       }
   }
}

void main()
{
    int x,y;
    printf("Enter the no.of vertices:\n");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(x=1;x<=n;x++)
    {
      for(y=1;y<=n;y++)
      {
       scanf("%d",&adj[x][y]);
      }
    }
    printf("Enter the start vertex: ");
    scanf("%d",&s);
    printf("Reachability of vertex %d\n",s);
    for(x=1;x<=n;x++)
    {
            visit[x]=0;
    }
    bfs(s);
    if(flag==0)
    {
      printf("No path found!!\n");
    }
}
