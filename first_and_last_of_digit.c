//15. Write a C program to find first and last digit of a number. 
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	int temp=n,count=0;
	while(temp>=10)
	{
		temp/=10;
	}
	int i=pow(count,10);
	printf("First digit is %d\nsecond digit is %d\n",temp,(n%10));
}
