#include <iostream>
using namespace std;


void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    print(n - 1);
}


int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}


int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * power(n - 1);
}


int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    cout << power(n) << endl;
    print(n);
}