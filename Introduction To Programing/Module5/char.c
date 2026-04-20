#include <stdio.h>

int main() {
   char ch;
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z'){
     ch=ch+32;
     printf("%c",ch);
   }else{
    ch=ch-32;
    printf("%c",ch);
   }

  return 0;
}