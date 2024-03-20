#include <iostream>
using namespace std;
// FIRST AND LAST OCCURENCES
/*int firstocc(int arr[], int key, int size)
{
    int s, e;
    s = 0;
    e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastocc(int arr[], int key, int size)
{
    int s, e;
    s = 0;
    e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int even[6] = {1, 2, 3, 3, 3, 4};
    cout << "FIRST OCCURECENCE OF 3 IS AT INDEX " << firstocc(even, 3, 6) << endl;
    cout << "LAST OCCURECENCE OF 3 IS AT INDEX " << lastocc(even, 3, 6);
}*/
//
//
// MOUNTAIN PEAK OF THE ARRAY
int peak(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;//or return s...
}
int main()
{
    int arr[8] = {3, 4, 5, 6, 10, 6, 2, 1};
    cout << " PEAK OF THE ARRAY IS AT INDEX " << peak(arr, 8);
    return 0;
}