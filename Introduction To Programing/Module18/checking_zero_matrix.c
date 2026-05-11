#include <stdio.h>

int main() {

  int r,c;
  scanf("%d %d",&r,&c);
  int a[r][c];

  for (int i=0; i<r;i++)
  {
    for (int j=0; j<c; j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  int count=0;
  int val= r*c;
   for (int i=0; i<r;i++)
  {
    for (int j=0; j<c; j++)
    {
       if(a[i][j]==0)
       {
        count++;
       }
    }
  }
 if(val==count)
 {
    printf("This is zero matrix");
 }else
 {
    printf("This is not a zero mmatrix");
 }
  return 0;
}