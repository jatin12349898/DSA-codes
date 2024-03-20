#include <iostream>
using namespace std;
int main()
{
    /*int n, i;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*321
     321
     321
    int n, i;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n-j+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */
    //
    //
    //
    /*
    123
    456
    789
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count;
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    *
    **
    ***
    int n, i;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */
    //
    //
    //
    /*
    1
    22
    333
    4444
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    1
    23
    456
    int n;
    cin >> n;
    int i = 1;
    int count =1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count<<" ";
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    1
    21
    321
    4321
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i -j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    AAA
    BBB
    CCC
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A';
            ch = ch + i-1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    ABC
    ABC
    ABC
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A';
        while (j <= n)
        {
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    ABC
    DEF
    GH1
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    ABC
    BCD
    CDE
        int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch= 'A' + i + j - 2;
            cout<<ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    A
    BB
    CCC
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A'+i-1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    A
    BC
    DEF
    GHIF
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    A
    BC
    CDE
    DEFG
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    D
    CD
    BCD
    ABCD
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    ABC
    BCD
    CDE
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            // ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
       *
      **
     ***
    ****
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    ****
    ***
    **
    *
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j<= n-i+1)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    ****
     ***
      **
       *
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 0;
        while (space < i-1)
        {
            cout << " ";
            space = space + 1;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    1111
     222
      33
       4
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 0;
        while (space < i-1)
        {
            cout << " ";
            space = space + 1;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
       1
      22
     333
    4444
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    1234
     234
      34
       4
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 0;
        while (space < i - 1)
        {
            cout << " ";
            space = space + 1;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
       1
      23
     456
    78910
    int n;
    cin >> n;
    int i = 1;
    int count=1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
       1
      121
     12321
    1234321
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
        int k = i - 1;
        while (k)
        {
            cout << k;
            k = k - 1;
        }

        cout << endl;
        i = i + 1;
    }*/
    //
    //
    //
    /*
    1234554321
    1234**4321
    123****321
    12******21
    1********1*/
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j = j + 1;
        }
        int k = 1;
        while (k <= 2 * i - 2)
        {
            cout << "*";
            k = k + 1;
        }
        int l = n-i+1;
        while (l)
        {
            cout << l;
            l = l - 1;
        }

        cout << endl;
        i = i + 1;
    }
}