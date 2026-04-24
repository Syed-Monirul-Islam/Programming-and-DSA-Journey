#include <stdio.h>
#include <string.h>

int main() {

  char a[105],b[105];
  scanf("%s %s",a,b);
  int len_a =strlen(a);
  int len_b = strlen(b);

  for (int i =0; i<len_a; i++)
  {
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i]= a[i] +32;
    }
  }

 for (int i =0; i<len_b; i++)
  {
    if(b[i]>='A' && b[i]<='Z')
    {
        b[i]= b[i] +32;
    }
  }
  int val= strcmp(a,b);
  printf("%d",val);

  return 0;
}