// In this problem you will be given an integer number N. Print "Zero"
//  if the number is equals to 0 and "Non Zero" Otherwise.
//1
#include <stdio.h>
int main() {
 int N;
 scanf("%d",&N);
 if(N==0){
   printf("Zero");
   }
  else if(N>=-1000 && N<=1000){
    printf("Non Zero");
  }else{
   printf("wrong input");
  }
}

// //2
#include <stdio.h>
int main() {
 int N;
 scanf("%d",&N);
  if(N==0)
  {
 printf(" Zero");
  }
  else{
    printf(" Non zero");
  }
}
//3
#include <stdio.h>
int main() {
 int N;
 printf("Enter your integer number:");
 scanf("%d",&N);
  if(N !=0)
  {
 printf("Non Zero");
  }
  else{
    printf(" zero");
  }
}