#include <stdio.h>

int main() {

  int n,p;
  scanf("%d",&n);

  int aver_n= n;
  double sum=0;
  while(n--)
  {
    scanf("%d",&p);
    sum += p;
  }
 double result=sum/aver_n;
    printf("%.12f\n", result);
  return 0;
}