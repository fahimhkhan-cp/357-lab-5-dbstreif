#ifndef TASK2_ARRAY_LIST_H_
#define TASK2_ARRAY_LIST_H_

typedef struct {
    char **array;
    int capacity;
    int length;
} ArrayList;

ArrayList *array_list_new();
ArrayList *array_list_add_to_end(ArrayList * array_list, char *string);

#endif  // TASK2_ARRAY_LIST_H_
