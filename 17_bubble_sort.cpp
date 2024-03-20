#include <iostream>
using namespace std;
int bubblesort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
void bubbleSort(int *array, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n-i; j++)
        {
            if (array[j] > array[j + 1])
            {
                flag = true;
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
        // No Swapping happened, array is sorted
        if (!flag)
        {
            return;
        }
    }
}
int main()
{
    int arr[5] = {4, 1, 6, 2, 7};
    // bubblesort(arr, 5);
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}