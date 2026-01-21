#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c;
    vector<int> results;
    for (int i=0;i<t;i++)
    {
        vector<int> a_b_c;
        cin>>a>>b>>c;
        a_b_c.push_back(a);
        a_b_c.push_back(b);
        a_b_c.push_back(c);
        sort(a_b_c.begin(),a_b_c.end());
        results.push_back(a_b_c[1]);
    }
   
    for (int i=0;i<results.size();i++)
   
    {
        cout<<results[i]<<endl;
    }
}