#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for (int i=0; i<n; i++)
    {
      if(s[i]>='A' && s[i]<='Z')
      {
        s[i]+=32;
      }
    }
    int fre[26]={0};
    for(int i=0;i<n; i++)
    {
        int val = s[i];
        fre[s[i]-'a']++;
    }
    int result=0;
    for(int i=0;i<26;i++)
    {
        if(fre[i] !=0)
        {
            result++;
        }
    }
    if(result ==26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
  return 0;
}