#include <stdio.h>

int main() {

    int n, event;
    int police = 0;           
    int untreated_crimes = 0; 

    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &event);

        if (event > 0)
        {
            police += event;
        } 
        else if (event == -1) {
            
            if (police > 0) {
                
                police--;
            } else {
              
                untreated_crimes++;
            }
        }
    }

    printf("%d\n", untreated_crimes);

    return 0;
}