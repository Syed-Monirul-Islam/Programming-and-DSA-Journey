#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[1005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min_val = arr[0];
    int min_pos = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_pos = i + 1;
        }
    }
    
    printf("%d %d\n", min_val, min_pos);
    
    return 0;
}