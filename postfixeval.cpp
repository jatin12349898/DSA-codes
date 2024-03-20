#include <iostream>
#include <stack>
using namespace std;

int postfieval(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
             st.push(operand2 + operand1);
                break;

                default:
                break;
            }
        }
    }
    return st.top();
}
