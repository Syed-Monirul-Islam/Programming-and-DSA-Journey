#include <stdio.h>

int sum(int num1,int num2)
{
    int ans = num1 + num2;
    return ans;
}


int main() {

  int val = sum(100,200);
  printf("%d",val);

  return 0;
}