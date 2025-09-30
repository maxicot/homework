#include <stdint.h>
#include <string.h>

// Check how many times the substring (second argument) appears in the original string literal
size_t entries(const char* s, const char* s1) {
    size_t len0 = strlen(s);
    size_t len1 = strlen(s1);

    if (len0 < len1 || len0 * len1 == 0) {
        return 0;
    }

    const char* limit = s + len0 - len1;
    size_t counter = 0;

    while (s <= limit) {
        const char* entry = strstr(s, s1);

        if (entry != 0) {
            counter++;
            s = entry + len1;
        } else {
            return counter;
        }
    }

    return counter;
}
