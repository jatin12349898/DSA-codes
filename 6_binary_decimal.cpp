#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "answer is " << ans << endl;*/
    //
    //
    //
    /*int n;
    cin >> n;
    n = -n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    int newans=~ans;
    newans=newans+1;
    cout<<newans;*/
    //
    //
    //
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while (n!=0)
    {
        int digit=n%10;
        ans=digit*(pow(2,i))+ans;
        n=n/10;
        i++;
    }
    cout<<ans;
}