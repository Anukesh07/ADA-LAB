#include <stdio.h>
#include<string.h>
void toh(int n,char start,char mid,char end)
{
	if(n==1)
	{
		printf("Move the disc %d from %c to %c\n",n,start,end);
	}
	else
	{
		toh(n-1,start,end,mid);
		printf("Move the disc %d from %c to %c\n",n,start,end);
		toh(n-1,mid,start,end);
	}
}
void main()
{
	int n;
	printf("Enter the number of discs\n");
	scanf("%d",&n);
	toh(n,'A','B','C');
}
