#include <stdio.h>

int main() {

    int n, opinion;
    int isHard = 0; 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &opinion);
        if (opinion == 1) {
            isHard = 1;
           
        }
    }

    
    if (isHard == 1) {
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }

    return 0;
}