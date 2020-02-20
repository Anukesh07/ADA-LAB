#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a[100],n,i,j,k,s,m;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the value of k\n");
	scanf("%d",&k);
	printf("Enter the distinct elements of the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[m])
			{
				s=a[m];
				a[m]=a[j];
				a[j]=s;
			}
		}
	}
	printf("k largest elements are\n");
	for(i=0;i<k;i++)
		printf("%d\n",a[i]);
}
