#include <stdio.h>
#include <stdbool.h>

bool isHappy(int n) {
    int sum = n;
    int x = n;

    if (n==1)
        return true;
    
    while (sum > 9)
    {
        printf("sum=%d\n", sum);
        sum = 0;
        while (x > 0)
        {
            int d = x % 10;
            printf("d=%d\n", d);
            sum += d * d;
            x /= 10;
            printf("sum=%d\n", sum);
        }
        if (sum == 1)
            return true;
        
        x = sum;
    }
    if (sum == 7)
        return true;

    return false;
}

int main()
{
    printf("%d\n", isHappy(19));
}