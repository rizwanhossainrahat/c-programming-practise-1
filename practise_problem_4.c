// You need to take one integer value as input and tell if the value is positive or negative or zero.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("number is positive");
    }
    else if (a<0)
    {
        printf("number is negative");
    }
    else 
    {
        printf("number is zero");
    }
    
    return 0;
}