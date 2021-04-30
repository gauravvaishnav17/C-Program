//Accept a number and display its sum of digits.
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int temp=n,sum=0;
	while(temp)
	{
		sum=sum+(temp%10);
		temp=temp/10;
	}
	printf("\nsum of digit=%d\n",sum);
}
