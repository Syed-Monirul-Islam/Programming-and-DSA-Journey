#include <stdio.h>

int main() {
    int t;
    
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        long long n;
        scanf("%lld", &n);
        long long result = (n + 1) / 2;

        printf("%lld\n", result);
    }

    return 0;
}