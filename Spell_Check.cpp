#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  
    string timur="Timur";
    sort(timur.begin(),timur.end());
    vector<string> results;
    int t;
    cin>>t;
   
    for (int i=0;i<t;i++)
    {
    int n;
    cin>>n;
    string word;
    cin>>word;
    if (n!=5)
    {
        results.push_back("NO");
        continue;
    }
    
  
    sort(word.begin(),word.end());

    if(word==timur)
    {
        results.push_back("YES");
    }
    else
    {
        results.push_back("NO");
    }
    }
    for (int j=0;j<t;j++)
            {
                cout<<results[j]<<endl;
            }
                return 0;
}