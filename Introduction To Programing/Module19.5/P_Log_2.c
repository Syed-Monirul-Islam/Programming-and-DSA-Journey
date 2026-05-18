#include <stdio.h>

long long int short_log2(long long int n) 
{
    if (n <= 1) {
        return 0;
    }
    
    return 1 + short_log2(n / 2);
}

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int ans = short_log2(n);
    printf("%lld\n", ans);

    return 0;
}