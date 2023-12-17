#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{
    bool sorted = false;
    int num_size = param_1->size;
    int* num_array = param_1->array;
    if (num_size == 0) {
        sorted = true;
    }
    for (int i = 1; i < num_size; i++) {
        if (num_array[i-1]<= num_array[i] && num_array[i]<= num_array[i+1]) {
            sorted = true;
            // break;
        }
        else if (num_array[i-1]>= num_array[i] && num_array[i]>= num_array[i+1]) {
            sorted = true;
        }
    }
    return sorted;
}