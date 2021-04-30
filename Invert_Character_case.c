//10. Write a C program to invert the case of alphabet. 
#include<Stdio.h>
int main()
{
	char a;
	printf("Enter the letter\n");
	scanf("%c",&a);
	int n=a;
	if(a>='a'&& a<='z')
	{   n=n-32;
		printf("%c\n",n);
	}
	else if(a>='A'&&a<='Z')
	{
		n=n+32;
		printf("%c\n",n);
	}
}
