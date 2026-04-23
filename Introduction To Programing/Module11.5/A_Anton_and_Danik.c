#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); 
    char s[n + 1]; 
    scanf("%s", s); 
    
    int anton = 0;
    int danik = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A')
        {
            anton++;
        } else if(s[i] == 'D')
        {
            danik++; 
        }
    }
    
    if(anton > danik) {
        printf("Anton\n");
    } else if(danik > anton) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return 0;
}