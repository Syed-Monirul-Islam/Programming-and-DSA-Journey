#include <stdio.h>
#include <string.h>

int main() {

  
    char s[105],t[105];
    scanf("%s %s",s,t);
    int len =strlen(t);
   
    for (int i=0,j=len-1;i<j; i++,j--)
    {
        char temp=t[i];
        t[i]=t[j];
        t[j]=temp;

       
    }
  if (strcmp(s,t)==0)
  {
    printf("YES\n");
  }
  else 
  {
     printf("NO\n");
  }

  return 0;
}