#include <stdio.h>
#include <string.h>

int main() 
{
  char s[105];
  scanf("%s",s);
  int len =strlen(s);
  char fre[26]={0};
  for(int i=0;i<len; i++)
  {
    int val=s[i];
    fre[s[i]-'a']++;

  }
 
   int result=0;
    for(int i=0;i<26;i++)
    {
    
        if(fre[i]!=0)
        {
          result++;
        }
    }
    if(result %2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

  return 0;
}