#include <iostream>
using namespace std;

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}
void quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {

        int loc = partition(arr, lb, ub);

        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}
int main()
{
    int arr[7] = {80, 10, 30, 90, 40, 50, 70};
    int n = 7;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}