#include <stdio.h>
#include <stdint.h>
#define SIZE 10
void averge_update(int num,int num1 ,double* averge)
{
    *averge = ((double)num + num1)/2;
}

int main()
{
    int num = 0;
    int num1 = 0;
    int i = 0,j=0;
    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int b[SIZE] = {90,92,93,94,95,96,97,98,99,910};
    double value[SIZE] = {0};
    
    
    for(i = 0,j=0;i<SIZE,j<SIZE;i++,j++)
    {
        averge_update(a[i],b[j],&value[i]);  
    }
    
    for (i = 0;i<SIZE;i++)
    {
        printf("value[%d]=%lf\n",i,value[i]);
    }
}