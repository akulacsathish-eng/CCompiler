#include<stdio.h>
int tempasP(int *arr)
{
    for(int i=0;i<5;i++)
    {
        
    printf("\n%d\n",*(arr+i));
    }
}
int tempasV(int size,int arr[size])
{
    arr[0] =10;
    printf("in Function = %d", arr[0]);
}
int main()
{

   int arr[5] = {1,3,4,5,6};

   tempasV(5,arr);
   tempasP(arr);
    printf("in Function = %d", arr[0]);

}