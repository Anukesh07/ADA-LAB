#include<stdio.h>
#include<stdlib.h>
void srch(int a[],int k,int n)
{
	int mid,count,fo,lo,fir,las,mid;
	fir=0;
	las=n-1;
	mid=(fir+las)/2;
	while(fir<=las)
	{
		if(arr[mid]<k)
		{
			fir=mid+1;
			las=n-1;
		}
		else if(arr[mid]=k)
		{
			count=1;
			while(arr[mid-1]!=k)
			{
				mid=mid-1;
				count++;
			}
			fo=mid;
			printf("The first occurence is at %d position\n",fo+1);
			mid=(fir+las)/2;
			while(arr[mid+1]!=k)
			{
				mid=mid+1;
				count++;
			}
			lo=mid;
			printf("The last occurence is at %d position\n",lo+1);
			printf("The total count of the key is %d\n",count);
		}
		else
		{
			fir=0;
			las=mid-1;
		}
	}
}
void main()
{
	int a[],n,k;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the key\n");
	scanf("%d",&k);
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	srch(a[],k,n);
}
