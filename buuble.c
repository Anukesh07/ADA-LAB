#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a[1000000],n,i,j,s;
	printf("Enter the size of the array\n"); 
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
		a[i]=rand()%100+1;
	clock_t start, end;
    double cpu_time_used;
    start = clock();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				s=a[j];
				a[j]=a[j+1];
				a[j+1]=s;
			}
		}
	}
	end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("The array after sorting\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("Sorting took %f seconds to execute \n", cpu_time_used);
}
