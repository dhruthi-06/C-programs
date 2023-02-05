#include <stdio.h>

void accept(int a[][10], int b[][10], int *m, int *n, int *p, int *q)
{
    printf("For matrix A, enter no of rows and coloumns: \n");
    scanf("%d %d", m, n);
    printf("For matrix B, enter no of rows and coloumns: \n");
    scanf("%d %d", p, q);

    if (*m == *p && *n == *q)
    {
        printf("Valid matrix\n");
        printf("Enter the values of matrix A: \n");
        for (int i = 0; i < *m; i++)
        {
            for (int j = 0; j < *n; j++)
            {
                printf("for A[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the values of matrix B: \n");
        for (int i = 0; i < *p; i++)
        {
            for (int j = 0; j < *q; j++)
            {
                printf("for B[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }
    }
    else
        printf("Invalid matrices\n");
}

void addition(int a[][10], int b[][10], int res[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = 0;
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}

void display(int res[][10], int m, int n)
{
    printf("Dislaying result: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10], res[10][10], m, n, p, q;
    accept(a, b, &m, &n, &p, &q);
    addition(a, b, res, m, n);
    display(res, m, n);

    return 0;
}
