#include <stdio.h>

int main(void)
{
    char ch[] = "computer";
    char *ptr = &ch[0];
    
    while(*ptr) {
        printf("%s\n", ptr);
        ptr++;
    }

    return 0;
}