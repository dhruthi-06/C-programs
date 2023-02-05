#include <stdio.h>

void accept(int a[][10], int *m, int *n)
{
    printf("Enter no of rows and columns: \n");
    scanf("%d %d", m, n);
    printf("Enter array elements: \n");
    for (int i = 0; i < *m; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            printf("for a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void transpose(int t[][10], int a[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[j][i] = a[i][j];
        }
    }
}

void display(int t[][10], int m, int n)
{
    printf("Displaying transpose : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], m, n, t[10][10];
    accept(a, &m, &n);
    transpose(t, a, m, n);
    display(t, m, n);

    return 0;
}
