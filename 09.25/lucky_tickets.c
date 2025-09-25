#include <stdio.h>

void main() {
    unsigned buf[28] = {0};

    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                buf[a + b + c]++;
            }
        }
    }

    unsigned res = 0;

    for (int i = 0; i < 28; i++) {
        res += buf[i] * buf[i];
    }

    printf("%d\n", res);
}
