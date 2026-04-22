// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>

int main() {
 
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100005];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int fre[100005]={0};
    for(int i=0; i<n; i++)
    {
        int val=a[i];
        fre[val]++;
    }
    for(int i=1;i<=m; i++)
    {
        printf("%d\n",fre[i]);
    }
  

  return 0;
}