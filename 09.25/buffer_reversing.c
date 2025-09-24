#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

// Reverses elements in the provided buffer.
// Takes in the pointer to the buffer, the amount of elements (not bytes) allocated and the size of an element in bytes.
// WARNING: unsound interface. UB if parameters are not provided correctly.
void reverse(void* ptr, size_t len, size_t size) {
    size_t counter = 0;
    void* end = ptr + ((len - 1) * size);
    void* temp = alloca(size);

    while (counter < len / 2) {
        memcpy(temp, ptr, size);
        memcpy(ptr, end, size);
        memcpy(end, temp, size);

        ptr += size;
        end -= size;

        counter++;
    }
}

// Example
void main() {
    int array[5] = {1, 2, 3, 4, 5};

    reverse(array, 5, sizeof(int));

    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
}
