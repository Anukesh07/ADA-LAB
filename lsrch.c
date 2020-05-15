#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int srch(int arr[],int m,int n,int ele)
{
    if(n<m)
    {
        return -1;
    }
    if(arr[m]==ele)
    {
        return m;
    }
    if(arr[n]==ele)
    {
        return n;
    }
    return srch(arr,m+1,n-1,ele);
}

int main()
{
    int ele,arr[10000];
    int n,flag;
    clock_t start,end;
    double total;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	  printf("Enter key:/n");
	  scanf("%d",&ele);
	  start = clock();
	  flag=srch(arr,0,n-1,ele);
	  end=clock();
	  printf("The number is at %d index: ",flag+1);
    total=(double)(start-end)/CLOCKS_PER_SEC;
	  printf("%f",total);
    return 0;
}
