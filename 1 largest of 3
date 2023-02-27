#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is largest\n", a);
        if (b > c)
            printf("%d is second largest\n", b);
        else
            printf("%d is second largest\n", c);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest\n", b);
        if (a > c)
            printf("%d is second largest\n", a);
        else
            printf("%d is second largest\n", c);
    }
    else
    {
        printf("%d is the largest number\n", c);
        if (a > b)
            printf("%d is the second largest number\n", a);
        else
            printf("%d is the second largest number\n", b);
    }

    return 0;
}
