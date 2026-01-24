#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    string code="codeforces";
    int diff;
    int t;
    cin>>t;
    vector<int> results;
    for (int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        diff=0;
        for (int j=0;j<code.length();j++)
        {
            if (s[j]!=code[j])
            {
                diff++;
            }
        }
        results.push_back(diff);
    }
    for (int k=0;k<t;k++)
    {
        cout<<results[k]<<endl;
    }
}