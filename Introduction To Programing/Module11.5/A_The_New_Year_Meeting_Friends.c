

#include <stdio.h>

int main() {
    int x1, x2, x3;
    if (scanf("%d %d %d", &x1, &x2, &x3) != 3) return 0;
    int max, min;

    max = x1;
    min = x1;

    if (x2 > max) max = x2;
    if (x2 < min) min = x2;

    if (x3 > max) max = x3;
    if (x3 < min) min = x3;

    int total_distance = max - min;

    printf("%d\n", total_distance);

    return 0;
}