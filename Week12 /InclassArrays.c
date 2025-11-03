/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int arr[10],arr2[10],arr3[3][3],arr4[3][3];
    
    
    for(int i=0;i<10;i++)
    {
        arr[i]= (i+1)*(i+1);
        arr2[i]= i*i*i;
    }
    
    int even =2,odd=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j] = even;
            arr4[i][j] = odd;
            even= even+2;
            odd = odd +2;
        }
    }
    
  printf("1D arrays are: \n");
  printf("1st Array :");
    for(int i=0;i<10;i++)
    {
        printf(" %d",arr[i]);
    
    }
    printf("\n2nd Array :");
    for(int i=0;i<10;i++)
    {
        printf(" %d",arr2[i]);
    }
  printf("\n2D arrays are: \n");
  printf("1st 2D array:\n ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
  printf("2nd 2D array\n");
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr4[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
