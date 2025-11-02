#include<stdio.h>
int main()
{
    int n,count=0,sum=0,pro=1,last;
    scanf("%d",&n);
    while(n!=0){
        last=n%10;
        if(last<=0 || last>=0){
            count++;

        }
        if(last!=0){
            sum=sum+last;

        }
        if(last<=0 || last>=0){
            pro=pro*last;
        }
        n=n/10;
    }
    printf("count=%d\n",count);
    printf("sum=%d\n",sum);
    printf("product=%d\n",pro);

    return 0;
}