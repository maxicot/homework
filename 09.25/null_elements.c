#include <stdint.h>

// Count the number of null elements in a buffer.
// Takes in the pointer to the buffer, the number of elements in it and the size of an element.
size_t nulls(const void* buf, size_t len, size_t size) {
    size_t counter = 0;

    for (size_t i = 0; i < len; i++) {
        size_t flag = 1;

        for (size_t j = 0; j < size; j++) {
             if (((const uint8_t*)buf + i * size)[j] != 0) {
                 flag = 0;
                 break;
            }
        }

        counter += flag;
    }

    return counter;
}
