#include <stdio.h>
#define SIZE 4
int findIfKeyInAraay(int *arr,int size,int Key)
{
	int i = 0;
	for (i = 0;i < SIZE;i++)
	{
		if (arr[i] == Key)
		{
			return 1;
		}
	}
	return 0;

}

int main()
{
	int grades[SIZE] = { 80,85,72,90 };
	int result;
	result = findIfKeyInAraay(grades,SIZE,85);
	//result  -0/1
	printf("%d", result);
	return 0;
}