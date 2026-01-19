#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int a;
    vector<int> results(t);
    for (int i=0;i<t;i++)
    {
        cin>>a;
        results[i]=a%10+(a/10);
    }
    for (int k=0;k<results.size();k++)
    {
        cout<<results[k]<<endl;
    }
}