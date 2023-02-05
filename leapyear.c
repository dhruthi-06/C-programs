#include <stdio.h>

void check_leapyr(int yr)
{
    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
        printf("%d is a leap year", yr);
    else
        printf("%d is not a leap year", yr);
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    check_leapyr(year);

    return 0;
}
