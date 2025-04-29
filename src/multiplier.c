
#include <stdio.h>
#include "multiplier.h"

int multiplier(int a, int b) {
    return a * b;
}

int main() {
    int x = 5, y = 4;
    int result = multiplier(x, y);
    printf("Result: %d\n", result);
    return 0;
}
