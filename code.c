#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c,s;
    printf("Enter value of cost price:");
    scanf("%d",&c);
    printf("Enter value of Selling price:");
    scanf("%d",&s);
    int x=c-s,y=s-c;
    if (c<s)
    {
    printf("Made profit of %d",y);
    }
    else
    {
    printf("Incurred loss of %d",x);
    }
    return 0;
}