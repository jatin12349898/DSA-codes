#include <iostream>
#include <vector>
using namespace std;
// REVERSE AN ARRAY
/*int reverse(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}*/
//
//
//
// USING VECTORS
/*vector<int> reverse(vector<int> v, int pos)
{
    int s = pos;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    int pos;
    cout << "enter the position you want reversed array" << endl;
    cin >> pos;
    vector<int> ans = reverse(v, pos);
    print(ans);
}*/
//
//
//
// MERGE SORTED ARRAY
/*void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8];
    merge(arr1, 5, arr2, 3, arr3);
    for (int i = 0; i < 8; i++)
    {
        cout << arr3[i] << endl;
    }
}*/
//
//
//
// MOVE ZEROES TO RIGHT
/*
void movezeroes(vector<int> &v)
{
    int nonzero = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            swap(v[i], v[nonzero]);
            nonzero++;
        }
    }
}
int main()
{
    vector<int> v = {0, 1, 0, 3, 12};
    movezeroes(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}*/
//
//
//
// ROTATE AN ARRAY BY A VALUE
/*void rotatearray(vector<int> &v, int k)
{
    vector<int> temp(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        temp[(k + i) % v.size()] = v[i];
    }
    v = temp;
}
int main()
{
    vector<int> v = {9, 7, 1, 11};
    int k;
    cin >> k;
    rotatearray(v, k);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}*/
//
//
//
// CHECK IF SORTED AND ROTATED ARRAY
/*bool check(vector<int> &v)
{
    int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
        {
            count++;
        }
    }
    if (v[v.size() - 1] > v[0])
    {
        count++;
    }
    return count <= 1;
}
int main()
{
    vector<int> v = {3, 4, 5, 1, 2};
    cout << check(v);
}*/
//
//
//