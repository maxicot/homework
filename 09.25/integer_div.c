#include <stdio.h>
#include <stdlib.h>

// Return -1 if x is negative and 1 otherwise
int sign(int x) {
    return (x < 1) ? -1 : 1;
}

// Find the integer part of a divided by b
int div_int(int a, int b) {
    int count = 0;
    int abs_a = abs(a);
    int abs_b = abs(b);

    while (abs_a >= abs_b) {
        count += 1;
        abs_a -= abs_b;
    }

    return count * sign(a) * sign(b);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        return -1;
    }

    int a, b;
    if (sscanf(argv[1], "%d", &a) * sscanf(argv[2], "%d", &b) != 1) {
        return -1;
    }

    if (b == 0) {
        printf("Division by 0 is not allowed");
    }

    printf("%d\n", div_int(a, b));
}
