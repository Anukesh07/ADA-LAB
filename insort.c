#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void insort(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++) 
	{
		k=a[i];
		j=i-1;
		while(j>=0&&a[j]>k)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
	}
}
void main()
{
	int a[1000000],n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%n;
	clock_t start, end;
	double cpu_time_used;
	start=clock();
	insort(a,n);
	end=clock();
	cpu_time_used=((double) (end - start))/CLOCKS_PER_SEC;
	printf("After sorting\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("Sorting took %f seconds to execute \n",cpu_time_used);

}
