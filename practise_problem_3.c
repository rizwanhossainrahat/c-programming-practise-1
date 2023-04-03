// You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    return 0;
}