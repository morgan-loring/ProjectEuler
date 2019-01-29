#include <stdio.h>

int main()
{
    unsigned int sum = 2;
    int oneBack = 2, twoBack = 1, count = 2;

    while (oneBack < 4000000)
    {
        int next = oneBack + twoBack;
        if(next % 2 == 0)
            sum += next;
        twoBack = oneBack;
        oneBack = next;
    }

    printf("Answer: %d\n", sum);

    return 0;
}