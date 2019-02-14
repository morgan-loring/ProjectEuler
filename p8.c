#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char numStr[1000];

    FILE *fp = fopen("./p8.txt", "r");

    unsigned long int largestProd = 0;
    char c = (char)fgetc(fp);
    int qq = 0;

    while (c != EOF)
    {
        // printf("%d\n", c);
        if (c != 10)
            numStr[qq++] = c;
        c = fgetc(fp);
    }

    for (int ii = 0; ii < 1000 - 13; ii++)
    {
        unsigned long int working = 1;
        for (int jj = 0; jj < 13; jj++)
        {
            char c = numStr[ii + jj];
            printf("%d ", atoi(&c));
            working *= atoi(&c);
        }

        printf("%lu\n", working);
        if (working > largestProd)
            largestProd = working;
    }

    printf("Answer: %lu\n", largestProd);

    fclose(fp);

    return 0;
}