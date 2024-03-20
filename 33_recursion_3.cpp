#include <iostream>
using namespace std;
// IS SORTED ARRAY
//
//
//
/*
bool issorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return issorted(arr + 1, size - 1);
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    bool ans = issorted(arr, size);
    if (ans)
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }
}
*/
//
//
//
// SUM OF ARRAY USING RECURSSION
/*
int getsum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int remainingpart = getsum(arr + 1, size - 1);
    int sum = arr[0] + remainingpart;
    return sum;
}
int main()
{
    int arr[5] = {2, 1, 4, 3, 5};
    int size = 5;
    int sum = getsum(arr, size);

    cout << "sum is" << endl
         << sum;
    return 0;
}*/
//
//
//
// LINEAR SEARCH
/*
bool linearsearch(int *arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingpart = linearsearch(arr + 1, size - 1, key);
        return remainingpart;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 2;
    bool ans = linearsearch(arr, 5, key);
    if (ans)
    {
        cout << "element is present";
    }
    else
    {
        cout << "element is absent";
    }
}*/
//
//
//
// BINARY SEARCH
bool binarysearch(int *arr, int s, int e, int k)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
    {
        return true;
    }
    if (arr[mid] < k)
    {
        return binarysearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, k);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 4;
    bool ans = binarysearch(arr, 0, 5, key);
    if (ans)
    {
        cout << "ELEMENT IS PRESENT" << endl;
    }
    return 0;
}