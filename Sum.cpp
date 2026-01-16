#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    vector<string> results;
    vector<int> number(n);
    for (int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if (a+b==c || a+c==b || b+c==a)
            {
                results.push_back("YES");
            }
        else
            {
                results.push_back("NO");
            }
    }
    for (int i=0;i<n;i++)
    {
        cout<<results[i]<<endl;
    }


}