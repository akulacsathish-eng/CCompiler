#include<stdio.h>


int func(int i)
{
    if (i==0)
        return 0;
   // printf("i= %d\n",i);
    func(i-1);
    printf("i= %d\n",i);

}
int main()
{
    func(5);
}