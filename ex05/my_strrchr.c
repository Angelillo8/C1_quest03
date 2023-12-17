#include <stddef.h>
#include <string.h>

char* my_strrchr(char* param_1, char param_2)
{
    int string_length = strlen(param_1);
    int i;
    int j = string_length-1;
    int k = 0;
    char* new_string = param_1;
    for (i = 0; i <= string_length; i++) {

        if (param_1[j] == param_2) {
            while (param_1[j] != '\0') {
                param_1[k] = new_string[j];
                j++;
                k++;
            }
            param_1[k] = '\0';

            return param_1;
        }
        j--;
    }

    return NULL; 
}