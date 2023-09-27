#include <stdio.h>
int main() {
    const int q = 5;
    int* const p = &q;

    int x = 10, y = 20;
    const int* px = &x;
    
    const int* const px = &x;

    *p = 7;

    /* const int q2 = 9; */
    // p = &q2; 
    
    px = &y;

    printf("value p = %d\n" , *p);

    printf(" value px = %d", *px);

    return 0;
}


