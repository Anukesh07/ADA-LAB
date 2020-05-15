#include <stdio.h>
#include <conio.h>
int NN, i, count=0;
int p[100], pi[100];
int dir[100];

void PrintPer()
{
   int i;
   count=count+1; 
   printf("[%d]",count);
   for(i=1;i<=NN;++i)
   {
      printf("%d",p[i]);
   }
}

void PrintTran(int x,int y)
{
   printf("(%d %d)\n",x,y);
}

void Move(int x,int d)
{
   int z;
   PrintTran(pi[x],pi[x]+d);
   z=p[pi[x]+d];
   p[pi[x]]=z;
   p[pi[x]+d]=x;
   pi[z]=pi[x];
   pi[x]=pi[x]+d;
}

void Per(int n)
{
   int i;
   if(n>NN)
      PrintPer();
   else
   {
      Per(n+1);
      for(i=1;i<=n-1;++i)
      {
         Move(n,dir[n]);
         Per(n+1);
      }
      dir[n]=-dir[n];
   }
}

void main()
{
   printf("Enter n: \n");
   scanf("%d",&NN);
   for(i=1;i<=NN;++i)
   {
      dir[i]=-1;
      p[i]=i;
      pi[i]=i;
   }
   Per(1);
   printf("\n");
   getch();
}
