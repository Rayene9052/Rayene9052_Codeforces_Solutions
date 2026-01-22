#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<string> results;
    for (int i=0;i<t;i++)
    {
    string a,b;
    cin>>a>>b;
    char a_first=a[0];
    char b_first=b[0];
    string a_substituted="";
    string b_substituted="";
    a_substituted+=b_first;
    a_substituted+=a.substr(1,a.length()-1);
    b_substituted+=a_first;
    b_substituted+=b.substr(1,b.length()-1);
    results.push_back(a_substituted+" "+b_substituted);
    }

    for (int i=0;i<results.size();i++)
    {
        cout<<results[i]<<endl;
    }

}
