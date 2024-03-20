#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "printing p " << p << endl;            // p ke andr jo i ka adress pada hai vo print ho jayega
    cout << "printing adress of p " << &p << endl; // p ka adress print hojayega

    cout << *p2 << endl; // p2 ke ander p ka adress hai aur * lagane se i ka adress print hojayega

    cout << i << endl; // printing value of i
    cout << *p << endl;
    cout << **p2 << endl;

    // printing adress of i
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
}