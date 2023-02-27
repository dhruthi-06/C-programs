#include <stdio.h>
void Accept(int arr[], int *n)
{
    printf("Enter number of elements: ");
    scanf("%d", n);
    printf("Enter array elements: ");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j +  1] = temp;
            }
        }
    }
}

void Display(int arr[], int n)
{
    printf("Displaying elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int a[10], n;
    Accept(a, &n);
    bubbleSort(a, n);
    Display(a, n);

    return 0;
}
