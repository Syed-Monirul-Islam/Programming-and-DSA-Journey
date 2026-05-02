#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int min_side = (a < b) ? a : b;
        int max_side = (a > b) ? a : b;

        int side;
        if (2 * min_side > max_side) {
            side = 2 * min_side;
        } else {
            side = max_side;
        }

        printf("%d\n", side * side);
    }

    return 0;
}