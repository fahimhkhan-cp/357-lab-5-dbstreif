#include <stdlib.h>
#include <string.h>
#include "array_list.h"

ArrayList *array_list_new() {
    int array_size = 10;

    ArrayList *array_list = (ArrayList*)malloc(sizeof(ArrayList));

    array_list->array = (char **)malloc(array_size * sizeof(char*));
    array_list->length = 0;
    array_list->capacity = array_size;

    return array_list;
}

ArrayList *array_list_add_to_end(ArrayList *array_list, char *string) {
    int array_list_cur = array_list->length;

    if (array_list->capacity <= array_list->length) {
        int new_capacity = array_list->capacity * 2;
        array_list->array = (char **)realloc(array_list->array, new_capacity * sizeof(char *));
        array_list->capacity = new_capacity;
    }

    int string_size = strlen(string) + 1;

    array_list->array[array_list_cur] = (char *)malloc(string_size * sizeof(char));
    strcpy(array_list->array[array_list_cur], string);
    array_list->length++;

    return array_list;
}
