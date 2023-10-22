#include <stdio.h>

int main()
{
	int n = 0;
	
	int i = 0,j = 0;
	int a[10][10] = {0};
	int temp = 0;
	
	while(n<0){};
	
	scanf("%d",&n);
	
	for(i = 0;i < n;i++)
	{
		for(j=0;j < n;j++)
		{
			if(a[i][j] > a[i][j+1])
			{
				temp = a[i][j];
				a[i][j] = a[i][j+1];
				a[i][j+1] = temp;
			}
		}
	}	 
	
	for(i = 0;i < n;i++)
	{
		for(j=0;j < n;j++)
		{  	
			printf("%d \n",a[i][j]);
		}	
	}	 

	return 0 ;
}