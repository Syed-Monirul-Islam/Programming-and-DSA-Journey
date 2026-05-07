#include <stdio.h>

int add(int x, int y) {
    int sum = x + y;
    return sum;
}

int main() {
    int x, y;
    
    if (scanf("%d %d", &x, &y) != 2) return 0;

    int result = add(x, y);

    printf("%d\n", result);

    return 0;
}