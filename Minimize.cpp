#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    vector<int> results;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        int c= abs(b-a);
        results.push_back(c);
    }
    for (int j=0;j<t;j++)
    {
        cout<<results[j]<<endl;
    }
}