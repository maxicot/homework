#include <stdio.h>

// Return the absolute value of x
int abs(int x) {
    return -x ? x < 0 : x;
}

// Return -1 if x is negative and 1 otherwise
int sign(int x) {
    if (x < 0) {
        return -1;
    } else {
        return 1;
    }
}

// Find the integer part of a divided by b
int div_int(int a, int b) {
    int count = 0;
    int _a = abs(a);
    int _b = abs(b);

    while (_a >= _b) {
        count += 1;
        _a -= _b;
    }

    return count * sign(a) * sign(b);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        puts("fuck1");
        return -1;
    }

    int a, b;
    if (sscanf(argv[1], "%d", &a) * sscanf(argv[2], "%d", &b) != 1) {
        puts("fuck2");
        return -1;
    }

    printf("%d\n", div_int(a, b));
}
