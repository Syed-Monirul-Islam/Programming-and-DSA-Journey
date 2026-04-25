#include <stdio.h>

int main() {
    
    int k, w;
    long long n;  
    scanf("%d %lld %d", &k, &n, &w);
    
    long long total_cost = 0;

    for (int i = 1; i <= w; i++) {
        total_cost += (i * k);
    }
   
    if (total_cost > n) {
        printf("%lld\n", total_cost - n);
    } else {
       
        printf("0\n");
    }
    
    return 0;
}