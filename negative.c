#include<stdio.h>

int main()
{   
    int arr[20],size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    for(int i = 0; i<size; i++)
    {
        printf("Enter value arr[%d]: ",i);
        scanf("%d",&arr[i]);

    }
   

   
   
   

    return 0;
}