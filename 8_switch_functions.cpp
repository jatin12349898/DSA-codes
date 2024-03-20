#include <iostream>
using namespace std;
#include <math.h>
/*int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    /*
    NOTES WALA QUESTION
    cout << "enter the notes you want" << endl;
    int notes;
    cin >> notes;
    switch (notes)
    {
    case 100:
        cout << "the number of notes are" << endl
             << 1330 / 100;
        break;
    case 50:
        cout << "the number of notes are" << endl
             << 1330 / 50;
        break;
    case 20:
        cout << "the number of notes are" << endl
             << 1330 / 20;
        break;
    case 1:
        cout << "the number of notes are" << endl
             << 1330 / 1;
        break;

    default:
        cout << "no notes found";
        break;
    }
    //
    //
    //
    int a, b;
    cin >> a >> b;
    cout<<power(a, b);
    return 0;
}*/
//
//
//
/*
FUNCTION FOR ODD EVEN
bool iseven(int a)
{
    if (a & 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int num;
    cout << "enter the number" << endl;
    cin>>num;
    cout << iseven(num);
    return 0;
}*/
//
//
//
/*FACTORIAL OF A NUMBER
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    cout << factorial(num);
    return 0;
}*/
//
//
//
/*
nCr OF NUMBERS
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return num / denom;
}
int main()
{
    int n, r;
    cout << "enter the values" << endl;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}*/
//
//
//
/*
PRIME NUMBER USING FUNCTIONS
bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    cout << isprime(num);
    return 0;
}*/
//
//
//
// NUMBER OF 1 IN A NUMBER
/*int main()
{
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int digit = n & 1;
        ans = digit * pow(10, i) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
}*/
//
//
//
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << fibo(i) << " ";
    }
}