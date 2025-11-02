#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    factorial:
    if(n==0 || n==1)
    {
        printf("1");
    }
    else
    {
        int fact=1;
        for(int i=2;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d",fact);
    }

    return 0;
}