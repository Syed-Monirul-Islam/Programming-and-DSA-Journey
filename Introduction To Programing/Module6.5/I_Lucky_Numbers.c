#include <stdio.h>

int main() {

  int x;
  int b=0;
  int c=0;
  scanf("%d",&x);
  b=x %10;
  c= x/10;
  if(b %c==0  || c%b==0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }



  return 0;
}