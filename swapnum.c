#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x, y;
    printf("Enter two numbers x, y: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swap, x: %d, y: %d", x, y);
    return 0;
}
