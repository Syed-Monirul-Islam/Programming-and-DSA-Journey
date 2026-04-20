#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);
  int a[1001];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  int c[n];
  for(int i=0;i<n; i++)
  {
    c[i]=a[(n-1)-i];
  }
  for(int i = 0; i < n; i++)
  {
    printf("%d ", c[i]);
  }

  return 0;
}