#include <stdio.h>
#include <string.h>

int checkPal(char * buff)
{
    int len = strlen(buff);
    for(int ii = 0; ii < (len - 1); ii++)
    {
        if(buff[ii] != buff[len - ii - 1])
            return 0;
    }
    return 1;
}

int main() 
{
    int biggestPal = 0;
    char buff[10] = {'\0'};

    for (int ii = 100; ii < 1000; ii++)
    {
        for(int jj = 100; jj < 1000; jj++)
        {
            int product = ii * jj;
            sprintf(buff, "%d", product);
            int isPal = checkPal(buff);
            if (isPal && product > biggestPal)
                biggestPal = product;
            memset(buff, '\0', 10);
        }
    }

    printf("Answer: %d\n", biggestPal);

    return 0;
}
