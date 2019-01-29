#include <stdio.h>

int main() 
{
    unsigned int sum = 0;

    for(int ii = 0; ii < 1000; ii++)
    {
        if(ii % 3 == 0 || ii % 5 == 0)
            sum += ii;
    }

    printf("Answer: %d\n", sum);

    return 0;
}