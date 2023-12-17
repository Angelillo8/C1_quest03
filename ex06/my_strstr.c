#include <stddef.h>
#include <string.h>
#include <stdbool.h>

char* my_strstr(char* param_1, char* param_2)
{
    int i = 0;
    int j;
    int k;
    int l;
    char* result;
    bool check = false;
    result = param_1;
    if (strlen(param_1) < strlen(param_2)) {
        return NULL;
    }
    if (strcmp(param_2, "") == 0) {
        return param_1;
    }
    while(param_1[i] != '\0'){
        k = 0;
        j = 0;
        l = i;
        if (param_1[i] == param_2[k]) {
            check = true;
            while (param_2[k] != '\0') {
                if (param_2[k] != param_1[l]){
                    check = false;
                    break;
                }
                l++;
                k++;
            }
            if (check == true) {
                while (param_1[i] != '\0'){
                    result[j] = param_1[i];
                    i++;
                    j++;
                }
                result[j] = '\0';
                return result;
            }
        }
        i++;

    }
    return NULL;
}