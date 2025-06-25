#include<stdio.h>
int main()
{
    int rows,cols;
    int i,j;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of columm : ");
    scanf("%d",&cols);

    int arr[20][20];
    printf("Enter elements of array : \n");
    for(i = 0;i < rows ; i++)
    {
        for(j = 0;j < cols; j++)
        {
            printf("Element [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int rowNum,colNum;
    printf("Enter the row number to sum (0 to %d): ",rows - 1);
    scanf("%d",&rowNum);

    printf("Enter the cols number to sum (0 to %d): ",cols - 1);
    scanf("%d",&colNum);

    int rowSum = 0;
    printf("Row %d elements : ",rowNum);
    for(j = 0; j< cols; j++)
    {
        printf("%d ",arr[rowNum][j]);
        rowSum += arr[rowNum][j];

    }
    printf("\nSum of row %d : %d\n",rowNum,rowSum);

    int colSum=0;
    printf("Cols %d elements : ",colNum);
    for(j = 0; j< cols; j++)
    {
        printf("%d ",arr[colNum][j]);
        colSum += arr[colNum][j];

    }
    printf("\nSum of col %d : %d\n",colNum,colSum);

    int totalSum = rowSum + colSum - arr[rowNum][colNum];
    printf("Total sum : %d\n",totalSum);


    
    



  return 0; 
}