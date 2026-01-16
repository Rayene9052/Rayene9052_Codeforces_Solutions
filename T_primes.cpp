#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/* 
************************* FAILED DUE TO TIME LIMIT EXCEEDED *************************

int is_3rd_prime(int n)
{
    int count_divisors=0;
    if (n<=2) {return 0;}
    else
    {
        for (int i=1;i<=n/2;i++)
        {
            if (n%i==0) {count_divisors++;}
            if (count_divisors>3) {return 0;}

        }
        return ((count_divisors+1)==3)?1:0;
    }
}
    */
long long prime(long long  n)
    {
        if (n<=1) {return 0;}
        for (long long i=2;i<=sqrt(n);i++)
        {
            if (n%i==0) {return 0;}
        }
        return 1;
    }
long long  is_3rd_prime(long long n)
    {
        long long root = sqrt(n);
        if (root * root != n) {
            return 0; // n is not a perfect square
        }
        return 1 && prime(root); // n is a perfect square  of  a prime number then it has exactly 3 divisors 1 , p and p² w hedhy haja mesh sehla ennek tfi9 beha 

    }


int main()
    {

        long long  n;

        cin >> n;
        vector<long long> t_primes(n);
        for (long long i=0;i<n;i++)
        {
            cin>>t_primes[i];
        }
        for (long long i=0;i<n;i++)
        {
            if (is_3rd_prime(t_primes[i])==1) {cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
        }
        return 0;
    }