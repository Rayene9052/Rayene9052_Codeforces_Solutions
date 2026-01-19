#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;  
    vector<string> results;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if (a+b==c)
        {
            results.push_back("+" );
        }
        else if (a-b==c)
        {
            results.push_back("-" );
        }

    }
    for (int j=0;j<results.size();j++)
    {
        cout<<results[j]<<endl;
    }

}