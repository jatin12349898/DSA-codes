#include <iostream>
#include <vector>
using namespace std;
// LINEAR SEACH IN 2 D ARRAY
/*bool ispresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cout << "enter the element to search " << endl;
    cin >> target;
    if (ispresent(arr, target, 3, 4))
    {
        cout << "ELEMENT IS PRESENT " << endl;
    }
    else
    {
        cout << "ELEMENT IS NOT PRESENT " << endl;
    }
}*/
//
//
//
// ROW WISE SUM
/*void sum(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout <<  sum << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[3][3];
    cout << "ENTER THE ELEMENTS OF THE ARRAY" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    sum(arr, 3, 3);
}*/
//
//
//
// col wise sum
/*void sum(int arr[][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout <<  sum << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[3][3];
    cout << "ENTER THE ELEMENTS OF THE ARRAY" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    sum(arr, 3, 3);
}*/
//
//
//
// LARGEST ROW SUM
/*int largestrowsum(int arr[][3], int row, int col)
{
    int maxi = __WINT_MIN__;
    int rowindex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "the maximum sum is " << maxi << endl;
    return row;
}
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ansindex;
    cout << "max row is at index " << largestrowsum(arr, 3, 3);
}*/
//
//
//
// print like a wave
/*int printwave(int arr[][3], int nrows, int ncols)
{
    for (int col = 0; col < ncols; col++)
    {
        if (col & 1)
        {
            // odd index bottom to top
            for (int row = nrows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            // 0 or even index top to bottom
            for (int row = 0; row < nrows; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}*/
//
//
//
// SEARCH IN 2D ARRAY
/*bool search(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];

        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<search(v,3);
}*/
//
//
//
// SEARCH IN 2D ARRAY II
/*bool search(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowindex = 0;
    int colindex = col - 1;

    while (rowindex < row && colindex >= 0)
    {
        int element = matrix[rowindex][colindex];
        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            rowindex++;
        }
        else
        {
            colindex++;
        }
    }
    return 0;
}
int main()
{
    vector<vector<int>> v;
}*/
//
//
//
// SPIRAL PRINT
vector<int> spiralorder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // index initialization
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;

    while (count < total)
    {
        // printing starting row
        for (int index = startingcol; index < endingcol; index++)
        {
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        // printing ending column
        for (int index = startingrow; index < endingrow; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;

        // printing ending row
        for (int index = endingcol; index < startingcol; index++)
        {
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;

        // printing starting col;
        for (int index = endingrow; index < startingrow; index++)
        {
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol--;
    }
    return ans;
}