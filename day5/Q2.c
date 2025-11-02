#include<stdio.h>
int main()
{
    float Rec,Sqr,tri,cir;
    int l,b,side,base,height,radius;
      scanf("%d%d",&l,&b);
      Rec=l*b;
        printf("Area of Rectangle:%f\n",Rec);

        scanf("%d",&side);

        Sqr=side*side;
            printf("Area of Square:%f\n",Sqr);
           scanf("%d%d",&base,&height);
        tri=0.5*base*height;

        printf("Area of Triangle:%f\n",tri);

          scanf("%d",&radius);
          cir=3.14*radius*radius;
           printf("Area of Circle:%f\n",cir);
        return 0;
}
    