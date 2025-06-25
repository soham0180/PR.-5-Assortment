#include<stdio.h>

int main()
{
    int arr[5][5];

    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n 2D array: \n");
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j< 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}