#include <stdio.h>

int main() {

  int m,n;
  scanf("%d %d",&m,&n);

  int total_dominoes=(m*n)/2;
  printf("%d",total_dominoes);

  return 0;
}