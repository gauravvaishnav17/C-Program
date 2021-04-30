#include<stdio.h>
#include<math.h>
int main()
{
	int arr[100];
	int n,i,count,size,j;
	scanf("%d",&size);
	
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
		
		
		
	for(j=0;j<size;j++)	
	{ 
		n=arr[j];
		count=0;
		printf("\n Enter array element\n");
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				count++;
			}
			
		}
		if(count==0)
		{
			printf("\n%d prime\n",arr[j]);
		}
		else
		{
			printf("\n%d not prime\n",arr[j]);
		}
	
	
	
	//	for (i=0;i<n;i++)
	//	{
	//		scanf("%d",&arr[i]);
	//	}
	//	for(j=0;j<n;j++)
	//	{
	//		
		}
	}
