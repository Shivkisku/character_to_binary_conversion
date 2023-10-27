#include <stdio.h>

void printBinary(unsigned n) {
    unsigned i;
    int significantBitFound = 0;
    for (i = 1 << 31; i > 0; i = i / 2) {
        if (n & i) {
            printf("1");
            significantBitFound = 1;
        } else {
            if (significantBitFound) {
                printf("0");
            }
        }
    }
    if (!significantBitFound) {
        printf("0"); // If the input was 0, print a single 0
    }
    printf("\n");
}

int main() {
    char letter = 'a'; // Change this to the letter you want to convert
    printf("The character '%c' in binary is: ", letter);
    printBinary(letter);
    return 0;
}
