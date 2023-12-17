char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    int i = 0;
    while (i < param_3) {
        param_1[i] = param_2[i];
        i++;
    }
    return param_1;
}