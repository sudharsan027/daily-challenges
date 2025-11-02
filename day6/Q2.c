#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);


    if(a>b  && a>c)
    {
        printf("greatest:%d\n",a);

        printf("smallest:%d %d",b,c);
    }

    else if(b>a  &&  b>c)
    {
        printf("grestest:%d\n",b);

        printf("smallest:%d %d",a,c);

    }
    else if(c>a  && c>b)
    {
        printf("greatest:%d\n",c);

        printf("smallest:%d %d",a,c);

    }

    else
    {
        printf("all are equal");
    }

    return 0;

}