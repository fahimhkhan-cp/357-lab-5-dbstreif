#include "checkit.h"
#include "array_list.h"

void test1() {
    ArrayList *array_list = array_list_new();
    char *string = "Hello There";

    for (int i = 0; i < 30; i++) {
        array_list = array_list_add_to_end(array_list, string);
        checkit_string(array_list->array[i], "Hello There");
    }
}

int main(void) {
   test1();
   return 0;
}
