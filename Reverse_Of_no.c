//16. Write a C program to enter a number and print its reverse.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	int rem,rev=0,tmp=n;
	while(tmp)
	{
		rem=tmp%10;
		rev=rev*10+rem;
		tmp/=10;
		
	}
	printf("rev no=%d\n",rev);
}
