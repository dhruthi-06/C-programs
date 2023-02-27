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
void Sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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

void Search(int arr[], int n)
{
    int key, l = 0, h = n - 1, mid;
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            printf("%d found at %d position", key, mid);
            return;
        }
        else if (arr[mid] > key)
            h = mid - 1;
        else
            l = mid + 1;
    }
    printf("%d not found", key);
}
int main()
{
    int a[10], n;
    Accept(a, &n);
    Sort(a, n);
    Display(a, n);
    Search(a, n);
    return 0;
}
