#include<stdio.h>

int func6(int n)
{
    printf("Value of n passed from main = %d",n);
    int result = n*2;
    return result;
}

int func5(int n)
{
    int result= func6(n);
    return result;
}
int func4(int n)
{
   int result= func5(n);
   return result;
}
int func3(int n)
{
   int result= func4(n);
   return result;
}

int func2(int n)
{
    int result =func3(n);
    return result;
}

int func1(int n)
{
    int result=func2(n);
    return result;
}

int main()
{
    int result=func1(7);

    printf("The result returned from fun 6 = %d",result);
}