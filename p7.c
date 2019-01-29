#include <stdio.h>

int main()
{
    int primesFound = 1;    //starting at 1 prime found 
    int checking = 3;       //and starting to check 3 so we can increment
                            //checking by 2 because no prime is even and 
                            //adding 2 to an odd will always produce an odd.

    while (primesFound != 10001)
    {
        int isPrime = 1;
        for (int ii = 2; ii < checking / 2; ii++)
        {
            if (checking % ii == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime != 0)
        {
            primesFound++;
        }
        checking += 2;
    }

    printf("Answer: %d\n", checking - 2);

    return 0;
}