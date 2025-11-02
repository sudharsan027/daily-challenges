#include<stdio.h.>
int main()
{
    int p,r,t,float si:

    scanf("%d%d%d"&p,&r,&t);
    if(t>12)
    {
        r/=12;
    }  
    si=(p*r*t)/100;
    printf("%d",si);

    return 0;
}