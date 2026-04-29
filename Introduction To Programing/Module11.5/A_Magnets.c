#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);

  int groups=1;
  int prev,current;
  scanf("%d",&prev);
 
  for (int i=1; i<n; i++)
  {
      scanf("%d",&current);
  {
    if(current !=prev)
    {
        groups++;
        prev = current;
    }
  }
  
  }

 printf("%d\n",groups);

  return 0;
}