#include <stdio.h>
#define SIZE 4
int findMax(int* arr, int size)
{
	int maxvalue = 0;
	maxvalue = arr[0];
	for (int i = 1;i < SIZE;i++)
	{
		if (arr[i] > maxvalue)
		{
			maxvalue = arr[i];
		}
	}
	return maxvalue;
}

int main()
{
	int arr[SIZE] = { 90 ,85 , 80 ,3000 };
	int max = 0;
	max = findMax(arr, SIZE);
	printf("%d", max);
	return 0;
}