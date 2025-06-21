#include <stdio.h>

int main() {
    // Loop from 3 to 5 for number of stars
    for (int i = 3; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // New line after each row
    }

    return 0;
}