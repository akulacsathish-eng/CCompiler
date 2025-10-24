void passbyVal(int a)
{
    a= 6;
}
void passbyref(int *a)
{
  *a  =7;
}

void main()
{
    int a=5,b=6,*c;
    passbyVal(a);
    printf("%d",sizeof(c));
    printf("a= %d\n",a);
    passbyref(&b);
    printf("b= %d\n",b);
}