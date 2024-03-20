#include <iostream>
using namespace std;
// BOOK ALLOCATION PROBLEM
/*bool ispossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int allocatebooks(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {20, 30, 40, 50};
    cout << allocatebooks(arr, 4, 2);
}*/
//
//
//
// PAINTERS PARTITION PROBLEM
/*bool ispossible(int arr[], int n, int m, int mid)
{
    int paintercount = 1;
    int boards = 0;
    for (int i = 0; i < n; i++)
    {
        if (boards + arr[i] <= mid)
        {
            boards += arr[i];
        }
        else
        {
            paintercount++;
            if (paintercount > m || arr[i] > mid)
            {
                return false;
            }
            boards = arr[i];
        }
    }
    return true;
}
int allocateboards(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {5, 5, 5, 5};
    cout << allocateboards(arr, 4, 2);
}*/
//
//
//
//AGGRESSIVE COWS QUESTION..
