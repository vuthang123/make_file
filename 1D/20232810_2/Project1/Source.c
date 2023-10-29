#include <stdio.h>
#define SIZE 4

int maxarray(int* arr, int size)
{
	int i = 0;
	int result = 0;
	int maxvalue = 0;
	for (i = 0;i < SIZE;i++)
	{	
		//tim cap so lon nhat
		if (arr[i] < arr[i + 1])
		{
			maxvalue = arr[i + 1];
		}
		else 
		{
			maxvalue = arr[i];
		}
		//so sanh gia tri lon nhat giua hai cap so voi max value
		if (maxvalue > result)
		{
			result = maxvalue;
		}
	}
	return result;
}

int main()
{
	int arr[SIZE] = { 80,300,72,900 };
	int result = 0;
	result = maxarray(arr, SIZE);

	printf("%d", result);


	return 0;
}