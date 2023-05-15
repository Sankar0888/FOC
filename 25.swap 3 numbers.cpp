#include <stdio.h>
 
void cyclicSwap(int* a, int* b, int* c)
{
    // Before overwriting b, store its
    // value in temp.
    int temp = *b;
 
    // Now do required swapping starting
    // with b.
    *b = *a;
    *a = *c;
    *c = temp;
}
 
int main()
{
    int a = 2, b = 4, c = 7;
 
    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);
 
    cyclicSwap(&a, &b, &c);
 
    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);
 
    return 0;
}
