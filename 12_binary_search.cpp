#include <iostream>
using namespace std;
// BINARY SEARCH
/*int binary(int arr[], int key, int size)
{
    int s, e;
    s = 0;
    e = size - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 5, 8, 10, 12};

    int evenindex = binary(even, 4, 6);
    cout << "index of 4 is " << evenindex << endl;

    int oddindex = binary(odd, 8, 5);
    cout << "index of 8 is " << oddindex << endl;

    return 0;
}*/
//
//
//
// CODE OPTIMIZATION...
int binary(int arr[], int key, int size)
{
    int s, e;
    s = 0;
    e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 5, 8, 10, 12};

    int evenindex = binary(even, 4, 6);
    cout << "index of 4 is " << evenindex << endl;

    int oddindex = binary(odd, 8, 5);
    cout << "index of 8 is " << oddindex << endl;

    return 0;
}