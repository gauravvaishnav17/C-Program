#include<stdio.h>
int main()
{	int i,n;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d\tx\t%d\t=\t%d\n",n,i,n*i);
	}
}
