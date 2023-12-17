#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


void my_first_struct(integer_array* param_1)
{
    int size = param_1->size;
    printf("%d", size);
    int* array = param_1->array;
    for (int i = 0; i < size; i++) {
        printf("\n%d", array[i]);
    }
    printf("\n");

}