#include <iostream>
#include <stack>
using namespace std;
int prefixeval(string s)
{
    stack<char> st;

    for (int i = s.length(); i > 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else{
            int o1;
            o1=st.top();
            st.pop();
            int o2=st.top();
            st.pop();
        }
    }
}