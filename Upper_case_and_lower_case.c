//Write a C program to check whether a character is uppercase or lowercase alphabet. 
#include<stdio.h>
int main()
{
	char a;
	printf("\nEnter a Character\n");
	
	scanf("%c",&a);
	 if(a>='A'&&a<='Z')
	printf("\nUpper Case\n");
	
	else	if(a>='a'&&a<='z')
	printf("\nLower Case\n");
	
}	

