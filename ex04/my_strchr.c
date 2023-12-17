#include <stddef.h>

char* my_strchr(char* param_1, char param_2)
{
    int i = 0;
    int j = 0;
    char* new_string;
    while (param_1[i] != '\0') {
        if (param_1[i] == param_2) {
            while (param_1[i] != '\0') {
                new_string[j] = param_1[i];
                i++;
                j++;
            }
            new_string[j] = '\0';
            return new_string;
        }
        i++;
    }
    return NULL; 
}