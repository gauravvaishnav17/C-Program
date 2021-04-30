//Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{	
			
			sum=sum+i;
						
		}
	}
//	printf("%d",sum);
	if(sum==n)
	{
		printf("%d is a perfect number",n);
	}
	else
		printf("%d is not a perfect number",n);
}
