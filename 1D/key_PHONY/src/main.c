#include<stdio.h>
#include<stdbool.h>
#include <stdint.h>

#define CLUSTER 4
#define CHANNEL 4

typedef bool boolean;

static bool arr[CLUSTER][CHANNEL];

int main()
{
	uint32_t arr[2] = {1000,1000};
	printf("%d",arr[0]);
}