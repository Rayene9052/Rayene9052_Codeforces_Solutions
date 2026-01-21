#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int spy(vector<int> a, int n)
{
    int pos=0;
    int majority=0;

    if (a[0]==a[1] || a[0]==a[2])
    {
        majority=a[0];

    }
    else 
    {
        majority=a[1];
    }
    for (int i=0;i<n;i++)
    {

        if (a[i]!=majority)
        {
            pos=i;
            break;
        }
    }
    return pos;
    
}

int main()
{
   int t;
   cin>>t;
   int n;
   vector<int> results;
   for (int i=0;i<t;i++)
   {
    cin>>n;
    vector<int> a;
    for (int j=0;j<n;j++)
    {
        int x;
        cin >> x;
        a.push_back(x);    
    }
    results.push_back(spy(a,n));

   }
   for (int i=0;i<results.size();i++)
   {
    cout<<results[i]+1<<endl;
   }

}