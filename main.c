#include <stdbool.h>
#include <stdio.h>

#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

bool isPowerOfFour(int);

int main() {
    printf("%d\n", isPowerOfFour(16));
    printf("%d\n", isPowerOfFour(5));
    printf("%d\n", isPowerOfFour(1));
    printf("%d\n", isPowerOfFour(262144));

    return 0;
}

bool isPowerOfFour(int n) {
    if ((n < 1) || (n & (n - 1))) {
        return false;
    }

    for (int i = 0; i <= 32; i += 2) {
        if (CHECK_BIT(n, i) != 0) {
            return true;
        }
    }

    return false;
}