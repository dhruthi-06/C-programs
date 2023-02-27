#include <stdio.h>
typedef struct Sparse
{
    int row, col, value;
} S;

void Accept(S m1[], int *m, int *n)
{
    int k = 1;
    int ele = 0;
    printf("Enter number of rows and coloumns : ");
    scanf("%d %d", m, n);
    printf("Enter the matrix: \n");
    for (int i = 0; i < *m; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            printf("for A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &ele);
            if (ele != 0)
            {
                m1[k].row = i;
                m1[k].col = j;
                m1[k++].value = ele;
            }
        }
    }
    m1[0].value = k - 1;
    m1[0].col = *n;
    m1[0].row = *m;
}

void Display(S m1[], int m, int n)
{
    int k = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m1[k].row == i && m1[k].col == j)
                printf("%d ", m1[k++].value);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    S m1[100], m2[100];
    int m, n;
    Accept(m1, &m, &n);
    printf("Displaying matrix\n");
    Display(m1, m, n);
    
    return 0;
}
