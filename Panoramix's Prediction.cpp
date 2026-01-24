#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{

    int n,m;
    cin>>n>>m;
    int next_prime_for_n=0;
    for (int i=n+1;i<=2*n;i++)
    {
        if(prime(i))
        {
            next_prime_for_n=i;
            break;
        }
    }
    if (m==next_prime_for_n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



}