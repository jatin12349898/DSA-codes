#include <iostream>
using namespace std;
/*PIVOT IN AN ARRAY

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else if (arr[mid] < arr[0])
        {
            e = mid;
        }
         mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[5] = {3, 4, 5, 7, 1};

    cout << "PIVOT IS AT INDEX " << pivot(arr, 5);
    return 0;
}*/
//
//
//
// SEARCH IN A ROTATED SORTED ARRAY
/*int binary(int arr[], int size, int s, int e, int key)
{
    s = 0;
    e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key == arr[mid])
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else if (arr[mid] < arr[0])
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int search(int arr[], int size, int key)
{
    int p = pivot(arr, size);
    if (key >= arr[p] && key <= arr[size - 1])
    {
        return binary(arr, size, p, size - 1, key);
    }
    else
    {
        return binary(arr, size, 0, p, key);
    }
}
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout << "1 IS AT THE LOCATION " << search(arr, 5, 1);
    return 0;
}*/
//
//
// SQUARE ROOT USING BINARY SEARCH
long long int search(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 1;
    long long int ans = 0;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreprecision(int n, int prec, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < prec; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int s;
    cout << "ENTER THE NUMBER YOU WANT SQUARE ROOT OF " << endl;
    cin >> s;
    int temp = search(s);
    cout << "SQUARE ROOT IS " << moreprecision(s, 3, temp);
    return 0;
}