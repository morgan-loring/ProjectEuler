#include <stdio.h>

int main() 
{
    int smallestDivisibleNumber = 20;
    int found = 0;
    int toCheck[] = { 11, 12, 13, 14, 16, 17, 18, 19, 20 };

    while(found == 0)
    {
//        printf("Trying %d -> ", smallestDivisibleNumber);
        for(int ii = 0; ii <= 9 ; ii++)
        {
            if(ii == 9)
            {
                found = 1;
                break;
            }
            if(smallestDivisibleNumber % toCheck[ii] != 0)
            {
  //              printf("Failed on %d\n", toCheck[ii]);
                break;
            }
        }
        if(found == 0)
            smallestDivisibleNumber += 20;
    }

    printf("Answer: %d\n", smallestDivisibleNumber);

    return 0;
}
