#include <string.h>

int my_strcmp(char* param_1, char* param_2)
{
    int smaller;
    if (strlen(param_1) >= strlen(param_2))
    {
        smaller = strlen(param_1);
    }
    else
    {
        smaller = strlen(param_2);
    }
    int i = 0;
    while (i < smaller)
    {
        if (param_1[i] != param_2[i])
        {
            return param_1[i] - param_2[i];
        }
        i++;
    }
    return 0;
}