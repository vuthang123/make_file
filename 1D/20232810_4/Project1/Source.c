#include <stdio.h>
#define SIZE 4
int total(int *arr,int size)
{
	int i = 0;
	int sum = 0;
	for (i=0;i<size;i++) 
	{
		sum += arr[i];
	}
	return sum;
}
int int_math(int* arr, int size)
{
	int sum = total(arr, size);
	int averge = sum / size;
	return averge;
}
double double_math(int* arr, int size)
{
	int sum = total(arr, size);
	//ep kieu 
	double averge = sum / (double)size;
	return averge;
}
//value_average trung binh cong
int main()
{
	int arr[4] = { 80,85,45,32 };
	int value_average_int = 0;
	double value_average_double ;
	value_average_int = int_math(arr, SIZE);
	value_average_double = double_math(arr, SIZE);
	printf("%d\n", value_average_int);
	printf("%lf\n", value_average_double);
}
