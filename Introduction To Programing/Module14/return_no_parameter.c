#include <stdio.h>

int sum()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int ans=num1 + num2;
    return ans;
}

int main() {

  int val = sum();
  printf("%d",val);

  return 0;
}