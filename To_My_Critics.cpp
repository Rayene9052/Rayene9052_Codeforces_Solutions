#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin>>t;
    vector<string> res;
    for (int i=0;i<t;i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if (a+b>=10 || a+c>=10 || b+c>=10)
        {
            res.push_back("YES");
        
        }
        else 
        {

           res.push_back("NO");

        }
        
    }
    for (int k=0;k<t;k++)
    {
        cout<<res[k]<<endl;
    }
}