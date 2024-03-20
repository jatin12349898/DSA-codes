#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// REVERSE A STRING USING STACK
/*
int main()
{
    string str = "JATIN";

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "answer is " << ans << endl;
}*/
//
//
// DELETE MIDDDLE ELEMENT IN STACK
/*
void solve(stack<int> &inputStack, int count, int size) {
  // base case
  if (count == size / 2) {
    inputStack.pop();
    return;
  }

  int num = inputStack.top();
  inputStack.pop();

  solve(inputStack, count + 1, size);

  inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N) {

  int count = 0;
  solve(inputStack, count, N);
}*/
//
//
// VALID PARENTHISIS
/*bool isValidParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // if opening bracket stack push
        // if closing bracket stacktop check and pop

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            // for closing bracket
            if (!st.empty())
            {
                char top = st.top();
                if (ch == ')' && top == '(' || ch == '}' && top == '{' ||
                    ch == ']' && top == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            { // agar stack empt hai
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}*/
//
//
// INSERT ELEMENT AT BOTTOM OF THE STACK
/*
void solve(stack<int> &s,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num=s.top();
    s.pop();

    solve(s,x);
    s.push(num);//saare elements vapis daalne kr liye
}
stack<int> pushAtBottom(stack<int>& myStack, int x)
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}
*/
//
//
//
// REVERSE A STACK
/*
void insertAtBottom(stack<int> &s, int element)
{
    // basecase
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {

        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);
    //cout << s.top() << endl;
}*/
//
//
// SORT A STACK
/*
void sortedInsert(stack<int> &stack, int num)
{
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();

    sortedInsert(stack, num);
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortedInsert(stack, num);
}*/
//
//
// REDUNDANT BRACKET
/*
#include <stack>

bool findRedundantBrackets(string &s)
{
stack<char> st;
for (int i = 0; i < s.length(); i++)
{
    char ch = s[i];

    if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        st.push(ch);
    }
    else
    {
        // ch ya toh ')' hai or lowercase letter

        if (ch == ')')
        {
            bool isRedundant = true;

            while (st.top() != '(')
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isRedundant = false;
                }
                st.pop();
            }

            if (isRedundant == true)
                return true;
            st.pop();
        }
    }
}
return false;
}*/
//
//
// NEXT SMALLER ELEMENT
/*
vector<int> nextSmallerElement(vector<int> &arr, int n) {
  stack<int> s;
  s.push(-1);

  vector<int> ans(n);

  for (int i = n - 1; i >= 0; i--) {
    int curr = arr[i];
    while (s.top() >= curr) {
      s.pop();
    }

    // ans is stack ka top
    ans[i] = s.top();
    s.push(curr);
  }
  return ans;
}*/
//
//
// CELEBRITY PROBLEM
/*
class Solution
{
public:
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {
        if (M[a][b] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        while (s.size() > 1)
        {

            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if (knows(M, a, b, n))//a knows b
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }

        // verify
        int candidate = s.top();

        bool rowcheck = false;
        int zerocount = 0;

        for (int i = 0; i < n; i++)
        {
            if (M[candidate][i] == 0)
            {
                zerocount++;
            }
        }

        if (zerocount == n)
        {
            rowcheck = true;
        }

        bool colcheck = false;
        int onecount = 0;

        for (int i = 0; i < n; i++)
        {
            if (M[i][candidate] == 1)
            {
                onecount++;
            }
        }

        if (onecount == n - 1)
        {
            colcheck = true;
        }

        if (rowcheck == true && colcheck == true)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
    }
};
*/
//
//
// maximum area in matrix
/*
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000



class Solution
{
private:
    vector<int> nextSmallerElement(int *arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(int *arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(int *heights, int n)
    {
        // int n= heights.size();

        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int l = heights[i];

            if (next[i] == -1)
            {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }

public:
    int maxArea(int M[MAX][MAX], int n, int m)
    {

        // compute area for first row
        int area = largestRectangleArea(M[0], m);

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                // row udpate: by adding previous row's value
                if (M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i - 1][j];
                else
                    M[i][j] = 0;
            }

            // entire row is updated now
            area = max(area, largestRectangleArea(M[i], m));
        }
        return area;
    }
};*/
//
//
//