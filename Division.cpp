#include <iostream>
#include <vector>
using namespace std;

int main()
    {
        int t;
        cin>>t;
        vector<string> results;
        vector<int> numbers(t);
        for (int i=0;i<t;i++)
        {
            cin>>numbers[i];
        }
        for (int j=0;j<t;j++)
        {
            if (numbers[j]>=1900)
            {
                results.push_back("Division 1");
            }
            else if (numbers[j]>=1600 && numbers[j]<=1899)
            {
                results.push_back("Division 2");
            }
            else if (numbers[j]>=1400 && numbers[j]<=1599)
            {
                results.push_back("Division 3");
            }
            else if (numbers[j]<=1399)
            {
                results.push_back("Division 4");
            }
        }
        for (int k=0;k<results.size();k++)
        {
            cout<<results[k]<<endl;
        }

    }