#include <iostream>
#include <cmath>
using namespace std;

void getTwoValues (int& begin, int& end)
{
    while (true)
    {
        cout << "Enter two integers, first larger than second: ";
        cin >> begin >> end;
        if (begin < end)
        break;
        cout << "Invalid input." << endl;
    }
}

bool isPrime (int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}