#include<stdio.h>
int main()
{
    int arr[20][20],size;
    printf("Enter your array size: ");
    scanf("%d",&size);
    
   
    for(int i=0; i < size; i++)
    {
        for(int j=0; j < size; j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0]; 
    for(int i = 0; i<size; i++)
    {
       for(int j=0; j<size;j++)
       {
        if(max < arr[i][j])
        {
            max = arr[i][j];
        }
        
      }
        
    }

    printf("\n max value is: %d",max);
   
}