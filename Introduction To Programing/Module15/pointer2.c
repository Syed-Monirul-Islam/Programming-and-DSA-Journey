#include <stdio.h>

int main() {

    int x=500;
    printf("%d\n",x);
    printf("%p\n",&x);

    int* ptr;
    ptr =&x;
    *ptr = 1000;
    printf("%d\n",x);
   

  return 0;
}