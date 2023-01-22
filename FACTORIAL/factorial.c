#include<stdio.h>
    int factorial(int num)
    {
        int i,fact=1;
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    int main()
    {
        int num;
        printf("Enter a number\n");
        scanf("%d",&num);
        printf("Factorial of %d is %d \n",num,factorial(num));
    }
