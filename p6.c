#include <stdio.h>

int main() 
{
    long unsigned int sum = 0, sumSqu = 0;
    for (int ii = 1; ii < 101; ii++)
    {
        sum += ii;


        sumSqu += ii * ii;
    }
    
    printf("sum: %lu\nsumSpu: %lu\nDiff: %lu\n", sum * sum, sumSqu, (sum * sum) - sumSqu);

    return 0;
}
