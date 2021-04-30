//Write a C program to check whether a number is palindrome or not.
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
	if(rev==n)
	printf("number is palindrom \n");
	else
	
	printf("number is not a palindrom \n");
}
