#include <string.h>

char* reverse_string(char* param_1)
{
    int string_length = strlen(param_1);
    char *new_string;
    int i;
    int j = string_length - 1;
    for (i = 0; i <= string_length; i++) {
        new_string[i] = param_1[j];
        j--;
    }
    param_1 = new_string;
    return param_1;
}