#include <stdio.h>
#include <math.h>

//compile with this - -lm to get the math library to link
//gcc -O0 -std=c11 p9.c -lm

int main()
{
    for (int a = 2; a < 500; a++)
    {
        double aS = a * a;
        for (int b = 2; b < 500; b++)
        {
            double bS = b * b;
            double cS = aS + bS;
            double c = sqrt(cS);

            if (a + b + c == 1000.0)
            {
                printf("Answer: a=%d b=%d c=%f a*b*c=%f\n", a, b, c, a * b * c);
                return 0;
            }
        }
    }
    return 0;
}