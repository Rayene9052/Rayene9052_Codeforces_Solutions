#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
        {
            
            int n;
            int count=0;
            cin>>n;
             vector<int> a(n);

            for (int i=0;i<n;i++)
            {
                cin>>a[i];

            }
            sort(a.begin(),a.end());
            int max=a[n-1];
            for (int j=0;j<n;j++)
            {
                count+=max-a[j];
                
            }
            cout<<count<<endl;
            return 0;
        }