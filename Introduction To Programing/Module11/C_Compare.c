#include <stdio.h>
#include <stdbool.h>

int main() {

  char x[25],y[25];
  scanf("%s %s",x,y);
  int i=0;
  while(true)
  {
    if(x[i]=='\0' && y[i]=='\0')
    {
        
        printf("%s",x);
        break;
    }
     else if(x[i]=='\0')
    { 
         printf("%s",x);
        break;
    }
    else if(y[i] =='\0')
    {
       
        printf("%s",y);
        break;
    }

       else if( x[i]<y[i])
    {
        printf("%s",x);
        break;
    }
       else if( x[i]>y[i])
    {
        printf("%s",y);
        break;
    }
    else if( x[i]==y[i])
    {
        i++;
    }

  }

  return 0;
}