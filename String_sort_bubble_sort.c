#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{	int i,j,n=3;
    char arr[10][100],temp[100];
    printf("Enter String\n");
	for(i=0;i<n;i++)
    {
    	scanf("%s",&arr[i]);
	}
    
     for ( j=0; j<n-1; j++)
    {
        for ( i=j+1; i<n; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
  
    printf("Strings in sorted order are : ");
    for (i=0; i<n; i++)
        printf("\n String %d is %s", i+1, arr[i]);
    return 0;
}
