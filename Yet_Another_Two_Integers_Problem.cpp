#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> results(t);
    for (int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int diff=ceil(abs(a-b)/10.0);
        results[i]=diff;

    }
    for (int k=0;k<results.size();k++)
    {
        cout<<results[k]<<endl;
    }

}