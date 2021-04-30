//Write a C program to find sum of all even and odd numbers between 1 to n. 
#include<stdio.h>
int main()
{
	int i,n,sum1=0,sum2=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum1=sum1+i;
		else
		sum2=sum2+i;
	}
	printf("Even sum=%d\nodd sum=%d",sum1,sum2);
		
}

