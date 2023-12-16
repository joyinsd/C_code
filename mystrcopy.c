#include <stdio.h>
#include <string.h>

int main()
{
    char str[7] = "banana";

    char buf[6];

    strcpy(buf, "apple");
    printf("%s\n", buf);

    return 0;
}