void display(int size, int arr[size])
{
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}
int displaysum(int size, int arr[size])
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum = sum+arr[i];
    return sum;
}   
void squareArr(int size, int arr[size])
{
    for(int i=0;i<size;i++)
        arr[i]=arr[i]*arr[i];
}

void main()
{
    int arr[50],n,i=2,idx=0,size=0,ch;

    printf("\nEnter a number :");
    scanf("%d",&n);

    while(i<=n)
    {
        arr[idx]= i;
        i=i+2;
        idx++;
        size++;
    }


    do{

        printf("1. dis \n 2.sum \n 3.square\n 4.exit\n");

        printf("Enter your choice : ");
        scanf("%d",&ch);

        if(ch ==1)
            display(size,arr);
            
    }while(ch!=4);

}