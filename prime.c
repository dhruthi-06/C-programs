#include <stdio.h>

void prime(int num)
{
    int c= 0;
    if (num == 0 || num == 1)
        c++;
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                c++;
            else
                continue;
        }
    }
    if (c == 0)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime numbe\nr", num);
}

int main()
{

    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    prime(num);
    return 0;
}
