#include <stdio.h>

typedef struct Sparse
{
    int row, col, value;
} S;

void Accept(S m1[])
{
    int m, n, k = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the sparse matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ele;
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
    m1[0].row = m;
    m1[0].col = n;
    m1[0].value = k - 1;
}

// does the transpose by traditional method
void transposeDisplay(S m1[])
{
    int k = 1, count = 0;
    int arr[100][100];
    for (int i = 0; i < m1[0].row; i++)
    {
        for (int j = 0; j < m1[0].col; j++)
        {
            if (m1[k].row == i && m1[k].col == j)
                arr[i][j] = m1[k++].value;
                
            else
                arr[i][j] = 0;
                
        }
        
    }
    
    for (int i = 0; i < m1[0].col; i++)
    {
        
        for (int j = 0; j < m1[0].row; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    S m1[100];
    Accept(m1);
    
    printf("Transpose of sparse matrix:\n");
    transposeDisplay(m1);
    return 0;
}
