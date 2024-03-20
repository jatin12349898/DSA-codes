#include <iostream>
using namespace std;
// REVERSE THE STRING USING RECURSSION..
/*
void reverse(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}
int main()
{
    string name = "jatin";
    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}*/
//
//
//
// CHECK PALINDROME
/*bool checkpalindrome(string &str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkpalindrome(str, i+1, j-1);
    }
}
int main()
{
    string name = "jaj";
    bool ans = checkpalindrome(name, 0, name.length() - 1);
    if (ans)
    {
        cout << "GIVEN STRING IS PALINDROME" << endl;
    }
    return 0;
}*/
//
//
//
// CALCULATING POWER USING RECURSSION
/*int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }

    // if b is odd
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}*/
//
//
//
// BUBBLE SORT USING RECURSSION
void sort(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sort(arr, n - 1);
}
int main()
{
    int arr[5] = {2, 5, 1, 3, 4};
    sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}