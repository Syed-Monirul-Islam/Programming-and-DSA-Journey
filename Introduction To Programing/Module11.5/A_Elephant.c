#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int count = 0;

    count = n / 5;
    if (n % 5 != 0) 
    {
        count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}