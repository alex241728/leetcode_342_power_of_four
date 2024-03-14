#include <stdbool.h>
#include <stdio.h>

bool isPowerOfFour(int);

int main() {
    printf("%d\n", isPowerOfFour(16));
    printf("%d\n", isPowerOfFour(5));
    printf("%d\n", isPowerOfFour(1));
    return 0;
}

bool isPowerOfFour(int n) {
    if ((n < 1) || (n & (n - 1)) || (n & 0xaaaaaaaa)) {
        return false;
    }

    return true;
}