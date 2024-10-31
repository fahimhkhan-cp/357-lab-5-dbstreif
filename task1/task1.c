#include "task1.h"
#include <ctype.h>

void str_lower(char *input_str, char *str_buff) {
    for (int index = 0; input_str[index] != '\0'; index++) {
        str_buff[index] = tolower(input_str[index]);
    }
}

void str_lower_mutate(char *orig) {
    for (int index = 0; orig[index] != '\0'; index++) {
        orig[index] = tolower(orig[index]);
    }
}
