#include <stdio.h>

int main() {

  int a,b;
  scanf("%d %d",&a,&b);
   int fashionable =0;
   if(a>b)
   {
      fashionable=b;
   }
   else
   {
     fashionable=a;
   }

   int rem_socks=(a>b ? a-b:b-a);
   int same_color= rem_socks/2;

   printf("%d %d",fashionable,same_color);

  return 0;
}