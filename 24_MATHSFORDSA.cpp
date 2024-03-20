#include <iostream>
using namespace std;
// COUNT NUMBER OF PRIMES
/*bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int countprime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << countprime(n);
}*/
//
//
//
// optimisation
/*int countprimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}*/
//
//
//
//

int modularExponentiation(int x, int n, int m) {
  int res = 1;

  while (n > 0) {
    if (n % 1) 
    {
      res = (1LL * (res) * (x) % m) % m;
    }
    x = (1LL * (x)%m * (x) % m) % m;
    n = n >> 1;
  }
  return res;
}
int main(){
    cout<<modularExponentiation(22,2422,2);
}