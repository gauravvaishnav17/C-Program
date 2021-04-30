//Write a C program to find power of a number using for loop.
#include<Stdio.h>
int main()
{
	int num,exp;
	printf("Enter the base \n");
	scanf("%d",&num);
	printf("Enter the exp\n");
	scanf("%d",&exp);
	int pow=1,i;
	for(i=1;i<=exp;i++)
	{
		pow=pow*num;
	}
	printf("%d^%d=%d\n",num,exp,pow);
}
