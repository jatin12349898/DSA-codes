#include <iostream>
// #include <stack>
using namespace std;

// int main()
// {

//     stack<int> s;

//     s.push(10);
//     s.push(20);

//     cout << s.top() << endl;

//     s.pop();
//     cout << s.top() << endl;

//     if (s.empty())
//     {
//         cout << "STACK IS EMPTY" << endl;
//     }
//     else
//     {
//         cout << "STACK IS NOT EMPTY" << endl;
//     }

//     cout<<"SIZE OF STACK IS "<<s.size()<<endl;

// }

class stack
{

public:
  int *arr;
  int top;
  int size;

  stack(int size)
  {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int element)
  {
    if(top==size-1)
    {
      cout << "STACK OVERFLOW" << endl;
    
    }
    else
    {
      top++;
      arr[top] = element;
    }
  }

  void pop()
  {
    if (top >= 0)
    {
      top--;
    }
    else if (top == -1)
    {
      cout << "STACK UNDERFLOW" << endl;
    }
  }

  int peek()
  {
    if (top >= 0)
    {
      return arr[top];
    }
    else if (top == -1)
    {
      cout << "STACK IS EMPTY" << endl;
      return -1;
    }
  }

  bool isempty()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  bool isfull()
  {
    if (top >= size - 1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main()
{
  stack st(5);

  st.push(22);
  st.push(43);
  st.push(44);
  st.push(44);
  st.push(44);
  st.push(44);

  cout << st.peek() << endl;

  st.pop();
  st.pop();
  st.pop();
  cout << st.peek() << endl;
}

#include <bits/stdc++.h>
class TwoStack
{
  int *arr;
  int top1;
  int top2;
  int size;

public:
  // Initialize TwoStack.
  TwoStack(int s)
  {
    this->size = s;
    top1 = -1;
    top2 = s;
    arr = new int[s];
  }

  // Push in stack 1.
  void push1(int num)
  {
    // Write your code here.
    if (top2 - top1 > 1)
    {
      top1++;
      arr[top1] = num;
    }
  }

  // Push in stack 2.
  void push2(int num)
  {
    // Write your code here.
    if (top2 - top1 > 1)
    {
      top2--;
      arr[top2] = num;
    }
  }

  // Pop from stack 1 and return popped element.
  int pop1()
  {
    // Write your code here.
    if (top1 >= 0)
    {
      int ans = arr[top1];
      top1--;
      return ans;
    }
    else
    {
      return -1;
    }
  }

  // Pop from stack 2 and return popped element.
  int pop2()
  {
    // Write your code here.
    if (top2 < size)
    {
      int ans = arr[top2];
      top2++;
      return ans;
    }
    else
    {
      return -1;
    }
  }
};
