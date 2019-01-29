#include <iostream>
#include <vector>

using namespace std;

vector<long unsigned int> factors;
vector<long unsigned int> primeFactors;

void findFactor(long unsigned int number)
{
    bool isPrime = true;
    for (long unsigned int jj = 2; jj < number / 2 && isPrime; jj++)
    {
        if (number % jj == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        primeFactors.push_back(number);
    }
    else
    {
        for (long unsigned int jj = 2; jj < number / 2; jj++)
        {
            if (number % jj == 0)
            {
                factors.push_back(number / jj);
                factors.push_back(jj);
                break;
            }
        }
    }
}

int main()
{
    long unsigned int bigNumber = 600851475143;
    //int bigNumber = 13195;
    long unsigned int half = bigNumber / 2;

    for(long unsigned int ii = 2; ii <= half; ii++)
    {
        if(bigNumber % ii == 0)
        {
            cout << ii << endl;
            factors.push_back(ii);
        }
    }

    cout << "Size: " << factors.size() << endl;

    while(factors.size() > 0)
    {
        findFactor(factors[0]);
        factors.erase(factors.begin());
    }
    cout << endl << primeFactors.size() << endl;
    long unsigned int biggestPrime = 0;
    for (long unsigned int ii = 0; ii < primeFactors.size(); ii++)
    {
        if (primeFactors[ii] > biggestPrime)
            biggestPrime = primeFactors[ii];
    }

    cout << endl << biggestPrime << endl;

    return 0;
}

