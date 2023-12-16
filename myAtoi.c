#include <stdio.h>

int myAtoi(char* str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // printf("%c\n", str[0][0]);
        res = res * 10 + str[i] - '0';
    }

    while (*str != NULL)
    {
        printf("%c\n", *str);
        // res = res * 10 + *str - '0';
        str = str + 1;
    }

    return res;
}

int main()
{
    // myAtoi("123456");
    printf("%d\n", myAtoi("123456"));
}