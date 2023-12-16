#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

int getDigitSum(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}


int compute_join_point(int s_1, int s_2)
{
    int d1, d2;
    // Write your code here
    // To debug: fprintf(stderr, "Debug messages...\n");'
    while (s_1 != s_2)
    {
        if (s_1 < s_2)
        {
            if (s_1 == 0)
                return -1;
            s_1 = s_1 + getDigitSum(s_1);
            fprintf(stderr, "s_1=%d\n", s_1);
        }
        else
        {
            if (s_2 == 0)
                return -1;
            s_2 = s_2 + getDigitSum(s_2);
            fprintf(stderr, "s_2=%d\n", s_2);
        }
    }

    return s_1;
}

/* Ignore and do not change the code below */
int main()
{
    int s_1;
    scanf("%d", &s_1);
    int s_2;
    scanf("%d", &s_2);
    int std_out_fd = dup(1);
    dup2(2, 1);
    int res = compute_join_point(s_1, s_2);
    dup2(std_out_fd, 1);
    printf("%d\n", res);

    int s=100;
    s /=10;
    printf("s=%d\n", s);

    return 0;
}
/* Ignore and do not change the code above */