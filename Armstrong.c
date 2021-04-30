//Accept a number and display whether its an Armstrong number.
#include<stdio.h>
int main()
{
	int i,n,sum=0,temp;
	printf("enter the no\n");
	scanf("%d",&n);
	temp=n;
	while(temp)
	{
		i=temp%10;
		sum=sum+(i*i*i);
		temp=temp/10;
	}
//	printf("\n%d\n",sum);
	if(n==sum)
	{
	
	printf("%d is Armstrong number\n",n);
	}
	else
	printf("%d is not Armstrong number",n);
	
	}
