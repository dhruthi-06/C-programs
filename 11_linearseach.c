#include <stdio.h>

void accept(int arr[], int *n)
{
    printf("Enter array size / no. of elements: ");
    scanf("%d", n);
    printf("Enter array elements: \n");
    for (int i = 0; i < *n; i++)
    {
        printf("for arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: %d\n", i + 1, arr[i]);
    }
}

void linearSearch(int arr[], int n)
{
    int key;
    printf("Enter key to be searched: ");
    scanf("%d", &key);
    printf("For the follow array: \n");
    display(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("\nkey found at position %d\n", i + 1);
            break;
        }
    }
}

int main()
{
    int arr[10], n = 0;
    accept(arr, &n);
    linearSearch(arr, n);
    return 0;
}
