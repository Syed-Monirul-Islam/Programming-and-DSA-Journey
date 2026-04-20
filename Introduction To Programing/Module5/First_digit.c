#include <stdio.h>

int main() {
  int x;
  int y=1000;
  int result=0;
  scanf("%d",&x);
  result=x/y;
  if(result %2==0){
    printf("EVEN");
  }else{
    printf("ODD");
  }
  return 0;
}