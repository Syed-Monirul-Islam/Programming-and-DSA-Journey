// #include <stdio.h>
// int main() {
//  int N;
//  int sum=5;
//  printf("Enter your number:");
//  scanf("%d",&N);

//  if(N>=-1 && N<=100){
//       sum +=N;
//       printf("%d",sum);
//  }else{
//     printf("wrong input");
//  }
//  return 0;
// }

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", N + 5);
    return 0;
}