#include<stdio.h>
int main()

{
    char a;
      scanf("%c",&a);
          printf("%c",a);
             
          if(a)
          {
            uppercase(a);


          }
          else if(a)
          {
            lowercase(a);
          }
          else if(a)
          {
            digit(a);
          }
          else
          {
            specialcharacter(a);
          }

       return 0;   

}