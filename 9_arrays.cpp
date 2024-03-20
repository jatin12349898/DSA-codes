#include <iostream>
using namespace std;
/*void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    /*
    INITIALIZING ENTIRE ARRAY WITH ONE VALUE
    int a[20];
    for (int i = 0; i < 20; i++)
    {
        a[i]={1};
    }
    for (int i = 0; i < 20; i++)
    {
        cout<<a[i]<<endl;
    }
    //
    //
    //

    int arr[10] = {1, 2, 3, 4, 5};
    printarray(arr, 10);
}*/
//
//
//
//
// MAX AND MIN VALUE OF ARRAY
/*int main()


{
    int arr[5] = {34, 32, 11, 44, 12};
    int max;
    max = __WINT_MIN__;
    int min;
    min = __INT_MAX__;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min;
}*/
//
//
//
// SUM OF ELEMENTS OF AN ARRAY
/*int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
}*/
//
//
//
//
// LINEAR SEARCH
/*int main()
{
    int arr[5] = {21, 11, 1, 3, 4};
    int search;
    cout << "ENTER THE NUMBER YOU WANT TO SEARCH" << endl;
    cin >> search;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            cout << "ELEMENT IS PRESENT IN THE ARRAY AT " << i + 1 << " POSITION"<<endl;
        }
    }
}*/
// ANOTHER METHOD
/*
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
        return 0;
}
int main()
{
    int arr[10] = {21, 12, 11, 22, 32, 23, 33, 22, 54, 45};
    int key;
    cout << "ENTER THE NUMBER YOU WANT TO SEARCH" << endl;
    cin>>key;
    cout<<search(arr, 10, key)<<endl;

    int found=search(arr,10,key);
    if (found)
    {
        cout << "ELEMENT IS PRESENT IN THE ARRAY" << endl;
    }
    else
    {
        cout << "ELEMENT IS NOT PRESENT IN THE ARRAY" << endl;
    }
    return 0;
}
*/
//
//
//
//
// REVERSE AN ARRAY;
/*void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {1, 2, 3, 4, 5};

    reverse(arr,6);
    reverse(brr, 5);

    printarray(arr, 6);
    cout<<endl;
    printarray(brr, 5);
}*/
//
//
//
//REVERSE ALTERNATE
/*void reverse(int arr[], int size)
{
    int start = 0;
    int end = 1;
    for (int i = 0; i < size; i++)
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    reverse(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}*/
//
//
//
//