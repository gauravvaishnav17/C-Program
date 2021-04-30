//Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number\n");
	scanf("%d",&n);
	i=1;
	while(n)
	{
		printf("%d\n",i++);
		n--;
	}
}
