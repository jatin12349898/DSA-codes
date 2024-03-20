#include <iostream>
using namespace std;
int main()
{
    int n, Note;
    cout << "Enter the amount to be divided into notes : " << endl;
    cin >> n;
    cout << "Enter the value of note ";
    cin >> Note;
    int fifty, twenty, one;
    fifty = n - (n / 100) * 100;
    twenty = fifty - (fifty / 50) * 50;
    one = twenty - (twenty / 20) * 20;

    switch (Note)
    {
    case 100:
        cout << n / 100 << " notes are required" << endl;
        break;
    case 50:
        cout << fifty / 50 << " notes are required" << endl;
        break;
    case 20:
        cout << twenty / 20 << " notes are required" << endl;
        break;
    case 1:
        cout << one << " notes are required" << endl;
        break;
    }
    cout << "The no. of 100 Rs notes are " << n / 100 << endl
         << "The number of 50 Rs notes are " << fifty / 50 << endl;
    cout << "The no. of 20 Rs notes are " << twenty / 20 << endl
         << "The number of 1 Rs notes are " << one << endl;
}