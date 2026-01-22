#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
        {
            int t;
            cin >>t;
            int n;
            vector<string> res;
            for (int i=0;i<t;i++)
            {
                cin>>n;
                int somme=0;
                vector<int> a(n);
                for (int j=0;j<n;j++)
                {
                    cin>>a[j];
                    somme+=a[j];
                }
                if (somme%2==0)
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