#include<stdio.h>
#include<stdlib.h>
void gcd(int a,int b)
{
	if(b==0)
	{
		printf("The GCD is %d\n",a);
	}
	else
	{
		gcd(b,a%b);
	}
}
void main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	gcd(a,b);
}
