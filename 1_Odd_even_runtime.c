#include<stdio.h>
int main()
{
	int arr[100],n,i,j,k;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("even no.\n");
	for(j=0;j<n;j++)
	{
		if(arr[j]%2==0)
		printf("%d\t",arr[j]);
	}
	printf("\nodd no.\n");
	for(k=0;k<n;k++)
	{
		if(arr[k]%2!=0)
		printf("%d\t",arr[k]);
	}
}
