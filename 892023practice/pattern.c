// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n, i = 0;
    scanf("%d", &n);
    
    if ( n >= 0 && n < 57) {
        for ( i = 1; i < n; i++) {
            printf(" %d +", i);
        }
        printf(" %d = %d", n, n*(n+1)/2);
    } else {
        printf("Invalid Input");
    }

    return 0;
}