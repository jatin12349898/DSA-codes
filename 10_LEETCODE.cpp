#include <iostream>
using namespace std;
/*FINDING UNIQUE ELEMENT
/*int main()
{
int arr[5] = {1, 2, 1, 2, 3};
int ans;
ans = 0;
for (int i = 0; i < 5; i++)
{
    ans = ans ^ arr[i];
}
cout << ans;
}*/
//
//
//
// INTERSECTION OF TWO ARRAYS....
/*int intersection(int arr[], int n, int brr[], int m)
{
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        for (int j = 0; j < m; j++)
        {
            if (element == brr[j])
            {
                cout << element << endl;
                brr[j]++; // element updated taki ek element hi print hoye
                break;
            }
        }
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 3};
    int brr[3] = {3, 4, 5};

    intersection(arr, 4, brr, 3);
    return 0;
}*/
//
//
//
// OPTIMIZATION OF THE SOLUTION...
/*int intersection(int arr[], int n, int brr[], int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            i++;
        }
        else if (arr[i] == brr[j])
        {
            cout << arr[i] << endl;
            i++;
            j++;
        }
        else if (arr[i] > brr[j])
        {
            j++;
        }
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 3};
    int brr[4] = {3, 3, 4, 5};

    intersection(arr, 4, brr, 4);
    return 0;
}*/
//
//
// PAIR SUM
/*int sum(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << arr[i];
                cout << arr[j] << endl;
            }
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int s;
    s = 5;
    sum(arr,5,5);
}*/
//
//
// TRIPLET SUM
/*int sum(int arr[], int size, int s)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " ";
                    cout << arr[j] << " ";
                    cout << arr[k] << " ";
                }
            }
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int s = 12;
    sum(arr, 5, 12);
    return 0;
}*/
//
//
// SORT 0 1
/*int sort(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sort(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}