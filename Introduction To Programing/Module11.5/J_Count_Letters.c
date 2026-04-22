#include <stdio.h>
#include <string.h>

int main() {

    char s[10000005];
    scanf("%s",s);

    int len =strlen(s);
    int fre[26]={0};
   for(int i=0; i<len;i++)
   {
      int val=s[i];
      fre[val-'a']++;

   }

   for(int i=0;i<26;i++ )
   {
    if(fre[i] !=0)
    {
        printf("%c : %d\n",i+'a',fre[i]);
    }
   }
  

  return 0;
}