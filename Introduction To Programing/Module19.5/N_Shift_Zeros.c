#include <stdio.h>


void shift_zeros(int a[], int n) 
{
    int count = 0; 

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        } else {
            count++; 
        }
    }

   
    for (int i = 0; i < count; i++) {
        printf("0 ");
    }
    printf("\n");
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    shift_zeros(a, n);

    return 0;
}