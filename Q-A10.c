#include<stdio.h>
int main()
{
    int mat[2][2], i, j, max;
    printf("Enter value of matrix: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            scanf("%d", &mat[i][j]);
    }
    max = mat[0][0];
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(max<mat[i][j])
                max = mat[i][j];
        }
    }
    printf("\nMax Number From Matrix Is = %d", max);
    getch();
    return 0;
}
