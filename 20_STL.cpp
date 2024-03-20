#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include<queue>

using namespace std;
int main()
{
    // ARRAY
    /*array<int, 5> a = {1, 2, 3, 4, 5}; // initialization
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "element at 2nd index " << a.at(2) << endl;

    cout << "empty or not " << a.empty() << endl;

    cout << "first element " << a.front() << endl;
    cout << "last element " << a.back() << endl;*/
    //
    //
    //
    // VECTOR
    /*vector<int> v;
    cout << "capacity " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity " << v.capacity() << endl;

    cout << "size of the vector is " << v.size() << endl; // number of elements..

    cout << "element at 2nd index " << v.at(2) << endl;

    cout << "first element " << v.front() << endl;
    cout << "last element " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }

    v.pop_back();

    cout << "after pop " << endl;
    for (int i : v)
    {
        cout << i << endl;
    }

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;

    vector<int> a(5, 1); // 5 size each 1
    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << endl;
    }

    vector<int> last(a); // a copy hogaya last vector me
    for (int i : last)
    {
        cout << i << endl;
    }*/
    //
    //
    //
    // DEQUE
    /*deque <int> d;

    //popback popfront pushback pushfront
    // d.front() d.back() d.empty() d.size()
    // d.erase(d.begin(),d.begin()+1) */
    //
    //
    //
    // LIST at nahi use kr skte ham isme
    /*list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << endl;
    }

    cout << "brfore erase " << endl;
    l.erase(l.begin()); // ITERATOR
    for (int i : l)
    {
        cout << i << endl;
    }
    cout << "after erase " << endl;
    for (int i : l)
    {
        cout << i << endl;
    }

    cout << "size of list" << l.size() << endl;

    list<int> n(l); // l list n me copy ho gayi

    list<int> s(5, 100);
    for (int i : s)
    {
        cout << i << endl;
    }*/
    //
    //
    //
    // STACK
    /*stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout << "top element " << s.top() << endl;

    s.pop(); // last element delete krne ke liye
    cout<<"after pop"<<endl;
    cout << "top element " << s.top() << endl;

    cout << "size of stack " << s.size() << endl;

    cout << "empty or not " << s.empty() << endl;*/
    //
    //
    //
    //QUEUE
    
}