#include <stdint.h>
#include <string.h>

// Check whether parenthesis are balanced in the provided string literal.
bool balanced(const char* str) {
    size_t counter = 0;

    for (size_t i = 0; i < strlen(str); i++) {
        char c = str[i];

        if (c == '(') {
            counter++;
        } else if (c == ')') {
            if (counter == 0) {
                return false;
            }

            counter--;
        }
    }

    return counter == 0;
}
