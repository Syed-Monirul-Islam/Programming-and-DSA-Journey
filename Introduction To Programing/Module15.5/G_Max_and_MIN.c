#include <stdio.h>

void fun(int n)
{
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
    
            }
            
        }
        
    }
    printf("%d %d",a[0],a[n-1]);

}

int main() {

    int n;
    scanf("%d",&n);
    fun(n);
  

  return 0;
}