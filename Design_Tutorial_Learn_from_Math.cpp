#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int composite_number(int n)
{
    if (n <4)
        return 0;
    for (int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
            return 1;
    }
    return 0;
}
int main()
{
    // a composite number is a positive integer that is not prime and not 1
    int n;
    cin>>n;
    vector<string> results;
    for (int i=0;i<n;i++)
    {
       if (composite_number(i) && composite_number(n-i))
    {
        results.push_back(to_string(i)+" "+to_string(n-i));
        break;

    }
    }

    cout<<results[0]<<endl;
    
}