#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("find out the row of e\n");
    int e;
    scanf("%d", &e);
    for (int i = 0; i < col; i++)
    {
        // printf("%d ", a[2][i]);
        printf("%d ", a[e][i]);
    }
    printf("\n");
    printf("find out the cols of c\n");
    int c;
    scanf("%d", &c);
    for (int i = 0; i < row; i++)
    {
        // printf("%d ", a[2][i]);
        printf("%d \n", a[i][c]);
    }
    return 0;
}