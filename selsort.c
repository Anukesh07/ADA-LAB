#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a[1000000],n,i,j,k,s;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%n;
	clock_t start, end;
	double cpu_time_used;
	start=clock();
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[k])
			{
				s=a[k];
				a[k]=a[j];
				a[j]=s;
			}
		}
	} 
	end=clock();
	cpu_time_used=((double) (end - start))/CLOCKS_PER_SEC;
	printf("After sorting\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("Sorting took %f seconds to execute \n",cpu_time_used);
}
