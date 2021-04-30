//Write a C program to count number of digits in a number
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter a nnumber\n");
	scanf("%d",&n);
	int temp=n;
	while(temp)
	{
		count++;
		temp/=10;
	}
	printf("count=%d\n",count);
}
