#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
     vector<string> res;
    for (int i=0;i<t;i++)
        {
            int n;
            cin>>n;
            vector<int> a(n);
            for (int j=0;j<n;j++)
                {
                    
                    cin>>a[j];
                }
            int consecutive_0s=0;
            int max_consecutive_0s=0;
            int j=0;
            while (j<n)
                {
                    if (a[j]==0)
                    {
                    consecutive_0s++;
                    if (consecutive_0s>max_consecutive_0s)
                    {
                        max_consecutive_0s=consecutive_0s;
                    }
                    }
                    else
                    {
                        consecutive_0s=0;
                    }
                    j++;}

            res.push_back(to_string(max_consecutive_0s));
            } 


    for (int k=0;k<t;k++)
    {
        cout<<res[k]<<endl;
    }
    
}