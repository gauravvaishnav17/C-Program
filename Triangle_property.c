#includ<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the angle 1 of triangle\n");
	scanf("%d",&a);
	printf("enter the angle 2 of triangle\n");
	scanf("%d",&b);	
	printf("enter the angle 3 of triangle\n");
	scanf("%d",&c);
	
	if(a+b+c==180)
	{
		printf("Traingle is valid");
	}
}
