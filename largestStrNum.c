#include <stdio.h>
#include <string.h>


char* largestGoodInteger(char* num) {
    int len = strlen(num);
    printf("len=%d\n", len);
    char ans[3];
    char* max_str = "";

    for (int i=2; i<len; i++)
    {
        if (num[i] == num[i-1] && num[i-1] == num[i-2])
        {
            for (int j = 0; j < 3; j++)
            {
                ans[j] = num[i];
            }
        }
        printf("ans=%s\n", ans);

        if (strcmp(ans, max_str) > 0)
        {
            max_str = ans;
            printf("max_str=%s\n", max_str);
        }
    }
    return max_str;
}

int main()
{
    char arr[] = "277745888";

    printf("%s\n", arr);

    largestGoodInteger(arr);
}