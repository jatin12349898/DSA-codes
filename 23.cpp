#include <iostream>
#include <string>
using namespace std;
/*int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int main()
{
    char name[20];
    cin >> name;
    int len = getlength(name);
    cout << len << endl;
    reverse(name, len);
    cout << name;

}*/
//
//
//
// PALINDROME
/*bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return 0;
        }
        else if (name[s] == name[e])
        {
            s++;
            e--;
        }
    }
    return 1;
}
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cin >> name;
    int len = getlength(name);
    cout << palindrome(name, len);
}*/
//
//
//
/*char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (tolowercase(name[s]) != tolowercase(name[e]))
        {
            return 0;
        }
        else if (name[s] == name[e])
        {
            s++;
            e--;
        }
    }
    return 1;
}
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cin >> name;
    int len = getlength(name);
    cout << palindrome(name, len);
}*/
//
//
//
// VALID PALINDROME
/*
bool valid(char ch)
{
    // faltu char hatane hai...
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}
char tolower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(string a)
{
    int s = 0;
    int e = a.length() - 1;
    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else if (a[s] == a[e])
        {
            s++;
            e--;
        }
    }
    return 1;
}
bool ispalindrome(string s)
{
    string temp = " ";
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    // lowercase me krdo
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = tolower(temp[i]);
    }

    //palindrome check krna hai ab
    return palindrome(temp);
}
int main(){
    string s;
    cin>>s;
    cout<<ispalindrome(s);
}*/
//
//
//
// MAXIMUM OCCURING CHARACTER
/*char getmaxocc(string s)
{
    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find max occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}
int main(){
    string s;
    cin>>s;
    cout<<getmaxocc(s);
}*/
//
//
//
// REPLACE SPACES
/*string replacespaces(string &s)
{
    string temp = " ";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    s=temp;
}
int main(){
    string s;
    getline(cin,s);
    replacespaces(s);
    cout<<s;
}*/
//
//
//
// 