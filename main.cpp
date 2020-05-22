#include <iostream>
#include "Set.h"
#include "PrimeNumbers.h"
#include "tests.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");    
    testAll();

    {
        const size_t n = 25;
        cout << endl << "Все простые числа до " << n << ":" << endl;
        PrintPrimes(n);
    }
    {
        const size_t n = 200;
        cout << endl << "Все простые числа до " << n << ":" << endl;
        PrintPrimes(n);
    }
}
