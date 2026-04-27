#include <stdio.h>

int main() {

  int t;
  scanf("%d",&t);

  while(t--)
  {
    int a,b;
    scanf("%d %d",&a,&b);
    int result=0;
     int rem =a%b;
    if(rem==0)
    {
        result=0;
    }
    else if(rem>0)
    {
        result=b-rem;
    }
    printf("%d\n",result);

  }

  return 0;
}