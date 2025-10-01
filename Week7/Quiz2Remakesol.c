#include<stdio.h>

 int totalC=0;
void menu(){

    printf("Menu \n 1.Pizza  - $10\n2. Burger - $7\n3. Pasta  - $8");
}

int total_cost(int orderCost)
{
    totalC = orderCost + totalC;
    return totalC;
}
int orderC()
{
    int qt,itemN,orderCost;

    printf("Enter Item number: ");
    scanf("%d",&itemN);

    printf("Enter qty: ");
    scanf("%d",&qt);

    if(itemN == 1){
            orderCost= 10*qt;
            printf("The cost of item1 = %d",orderCost);
            total_cost(orderCost);
    }
    else if(itemN==2)
    {
         orderCost= 8*qt;
           printf("The cost of item2 = %d",orderCost);
           total_cost(orderCost);
    }
    else if(itemN==3)
    {
         orderCost= 7*qt;
           printf("The cost of item3 = %d",orderCost);
           total_cost(orderCost);
    }
    else
        printf("Invalid option");


}



int main()
{
    printf("===== Welcome to Simple Restaurant =====");
    menu();

    int ch,totalcost;
    do
    {
        menu();
        printf("\n1. Show Menu\n 2. Take an Order\n 3. Show Bill \n 4. Exit");
        scanf("%d",&ch);


        if(ch ==1)
        {
            menu();
        }
        else if (ch==2)
        {
            orderC();
        }
        else if(ch==3)
        {
            totalcost= total_cost(0);
            printf("Total cost =%d",totalcost);
        }
        else
            printf("Invlid Choice");
    } while (ch!=4);
    
}