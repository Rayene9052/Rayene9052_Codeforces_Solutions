#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
int main()
{       
    int t;
    cin>>t;
    vector<string> results;
    for (int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if ((c>b) && (b>a))
        {
            results.push_back("STAIR");
        }
        else if ((b>a && b>c))
        {
            results.push_back("PEAK");
        }
        else{
            results.push_back("NONE");
        }

    }
    for (int k=0;k<results.size();k++)
    {
        cout<<results[k]<<endl;
    }
}